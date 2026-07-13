class Solution {
public:

    bool isFreqSame(int a[], int b[]) {
        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length())
            return false;

        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windowSize = s1.length();

        for(int i = 0; i <= s2.length() - windowSize; i++) {

            int windowFreq[26] = {0};

            int idx = i;
            int windowIdx = 0;

            while(windowIdx < windowSize) {
                windowFreq[s2[idx] - 'a']++;
                idx++;
                windowIdx++;
            }

            if(isFreqSame(freq, windowFreq))
                return true;
        }

        return false;
    }
};
class Solution {
public:

    bool isfreqsame(int freq[], int windfreq[]) {
        for(int i = 0; i < 26; i++) {
            if(freq[i] != windfreq[i])
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

        int windsize = s1.length();

        for(int i = 0; i <= s2.length() - windsize; i++) {

            int windfreq[26] = {0};   // Reset for every window

            int windidx = 0;
            int idx = i;

            while(windidx < windsize) {
                windfreq[s2[idx] - 'a']++;
                idx++;
                windidx++;
            }

            if(isfreqsame(freq, windfreq))
                return true;
        }

        return false;
    }
};
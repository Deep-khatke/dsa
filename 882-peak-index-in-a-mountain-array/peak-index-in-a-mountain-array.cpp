class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int biggest=arr[0];
        int n=arr.size();
        int bigindex=0;
        for(int i=1;i<n;i++){
            if(arr[i]>biggest){
                biggest=arr[i];
                bigindex=max(bigindex,i);
            }
        }
        return bigindex;
        
    }
};
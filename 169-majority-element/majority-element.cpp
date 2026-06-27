class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int fre = 0;
            for(int j=0;j<n;j++){
               if(nums[i]==nums[j]){
                fre++;
               }
               if(fre>n/2){
                return nums[i];
               }
            }
        }
        return -1;
    }
};
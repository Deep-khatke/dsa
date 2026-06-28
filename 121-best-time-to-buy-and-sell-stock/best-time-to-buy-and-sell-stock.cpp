class Solution {
public:
    int maxProfit(vector<int>& pri) {
        int maxprofit =0;
        int bestbuy = pri[0];
        int n = pri.size();
        for(int i=1; i<n;i++){
            if(pri[i]>bestbuy){
                maxprofit=max(maxprofit,(pri[i]-bestbuy));

            }
            bestbuy=min(bestbuy,pri[i]);
        }
        return maxprofit;
        
    }
};
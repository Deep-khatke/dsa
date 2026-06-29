class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxvol=0;

        while(lp<rp){
            int w=rp-lp;
            int h=min(height[rp],height[lp]);
            int vol=w*h;
            maxvol=max(vol,maxvol);

    
          if(height[rp]<height[lp]){
            rp--;
          }
          else{
            lp++;
          }
        
        }
        return maxvol;
    }
};
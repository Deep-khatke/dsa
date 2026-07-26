class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int row=0,col=n-1;

        while(row<m && col>=0 ){

        
            if(mat[row][col]==target){
                return true;
            }
            else if(mat[row][col]>target){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};
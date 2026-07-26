class Solution {
public:

    bool searchinRow(vector<vector<int>>& mat, int tar, int row){

        int n = mat[0].size();
        int st = 0;
        int end = n - 1;

        while(st <= end){

            int mid = st + (end - st) / 2;

            if(tar == mat[row][mid]){
                return true;
            }
            else if(tar > mat[row][mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int tar) {

        int m = mat.size();
        int n = mat[0].size();

        int strow = 0;
        int endrow = m - 1;

        while(strow <= endrow){

            int midrow = strow + (endrow - strow)/2;

            if(tar >= mat[midrow][0] && tar <= mat[midrow][n-1]){
                return searchinRow(mat, tar, midrow);
            }
            else if(tar > mat[midrow][n-1]){
                strow = midrow + 1;
            }
            else{
                endrow = midrow - 1;
            }
        }

        return false;
    }
};
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        vector<int> ans;
        unordered_set<int> s;

        int n = grid.size();

        int repeated, missing;

        long long expectedSum = 0;
        long long actualSum = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                actualSum += grid[i][j];

                if(s.find(grid[i][j]) != s.end()) {
                    repeated = grid[i][j];
                }

                s.insert(grid[i][j]);
            }
        }

        expectedSum = 1LL * (n * n) * (n * n + 1) / 2;

        missing = expectedSum + repeated - actualSum;

        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
    }
};
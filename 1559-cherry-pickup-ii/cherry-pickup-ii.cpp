class Solution {
public:
    bool isInside(int y1, int y2, int n){
        return (y1 >= 0 && y1 < n && y2 >= 0 && y2 <n);
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>dy({-1, 0, 1});
        vector<vector<vector<int>>> dp(m+1, vector<vector<int>>(n, vector<int>(n, 0)));
        for(int x = m-1; x>=0; x--){
            for(int y1 = 0; y1 < n; y1++){
                for(int y2 = 0; y2 < n; y2++){
                    int currScore = (y1 == y2 ? grid[x][y1] : grid[x][y1] + grid[x][y2]);
                    for(int i=0;i<3;i++){
                        int curry1 = y1 + dy[i];
                        for(int j=0;j<3;j++){
                            int curry2 = y2 + dy[j];
                            dp[x][y1][y2] = max(dp[x][y1][y2], currScore + (isInside(curry1, curry2, n) ? dp[x+1][curry1][curry2] : 0));
                        }
                    }
                }
            }
        }
        return dp[0][0][n-1];
    }
};
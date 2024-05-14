class Solution {
public:
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    int getMaximumGold(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0){
                    res = max(res, solve(grid, i, j));
                }
            }
        }
        return res;
    }

    int solve(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)
            return 0;
        
        int cur = grid[i][j];
        grid[i][j] = 0;
        int ans = cur;

        for(int k=0;k<4;k++){
            int x = i + dx[k];
            int y = j + dy[k];
            ans = max(ans, cur + solve(grid, x, y));
        }
        grid[i][j] = cur;
        return ans;
    }
};
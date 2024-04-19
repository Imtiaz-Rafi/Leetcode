class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    // cout<<i<<" "<<j<<endl;
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }

    void dfs(vector<vector<char>>&grid, int i, int j){
        if(grid[i][j]!='1'){
            return;
        }
        grid[i][j] = '0';
        if(i<grid.size()-1 && grid[i+1][j]=='1')
            dfs(grid, i+1, j);
        if(i>0 && grid[i-1][j]=='1')
            dfs(grid, i-1, j);
        if(j<grid[0].size()-1 && grid[i][j+1]=='1')
            dfs(grid, i, j+1);
        if(j>0 && grid[i][j-1]=='1')
            dfs(grid, i, j-1);
    }
};
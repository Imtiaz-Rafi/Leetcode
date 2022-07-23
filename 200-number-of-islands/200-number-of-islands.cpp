class Solution {
    vector<vector<int>>vis=vector<vector<int>>(310,vector<int>(310));
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
public:
    int numIslands(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                vis[i][j] = 0;
            }
        }
        int cnt = 0;
        int n = grid.size(),m = grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return cnt;
    }
    
    void dfs(int i, int j, int n,int m,vector<vector<char>>& grid){
        vis[i][j] = 1;
        for(int x = 0;x<4;x++){
            int row = dx[x]+i;
            int col = dy[x]+j;
            
            if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && grid[row][col]=='1'){
                dfs(row,col,n,m,grid);
            }
            
        }
    }
};
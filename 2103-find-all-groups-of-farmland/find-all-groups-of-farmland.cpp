class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();

        vector<vector<int>> vis(m, vector<int>(n,0));
        vector<vector<int>>ans;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && land[i][j] == 1) {
                    int r2 = i, c2 = j;
                    solve(i,j, r2, c2, land, vis);
                    ans.push_back({i, j, r2, c2,});
                }
            }
        }
        return ans;
    }

    void solve(int r, int c, int &r2, int &c2, vector<vector<int>> &land, vector<vector<int>>& vis){
        int m = land.size();
        int n = land[0].size();
        vis[r][c] = 1;

        int x[4] = {-1, 1, 0, 0};
        int y[4] = {0, 0, -1, 1};

        for(int i=0;i<4;i++){
            int r1 = x[i] + r;
            int c1 = y[i] + c;

            if(r1>=0 && r1< m && c1 >= 0 && c1 < n && land[r1][c1] == 1 && !vis[r1][c1]){
                r2 = max(r2, r1);
                c2 = max(c2, c1);

                solve(r1, c1, r2, c2, land, vis);
            }
        }
    }
};
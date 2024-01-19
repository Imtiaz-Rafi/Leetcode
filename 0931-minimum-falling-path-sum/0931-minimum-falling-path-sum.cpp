class Solution {
public:
    long long int dp[110][110];
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0 ;i<n-1 ;i++){
            for(int j=0; j<n; j++){
                int mid = INT_MAX, left = INT_MAX, right = INT_MAX;
                
                mid = matrix[i][j];
                
                if(j<n-1)
                    right = matrix[i][j+1];
                
                if(j>0)
                    left = matrix[i][j-1];
                
                matrix[i+1][j] = matrix[i+1][j] + min(mid, min(left, right));
            }
        }
        
        int ans = INT_MAX;
        for(int j=0; j<n; j++){
            ans = min(ans, matrix[n-1][j]);
        }
        return ans;
    }
};
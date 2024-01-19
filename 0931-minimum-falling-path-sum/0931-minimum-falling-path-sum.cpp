class Solution {
public:
    long long int dp[110][110];
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=1 ;i<n ;i++){
            for(int j=0; j<n; j++){
                int mid = INT_MAX, left = INT_MAX, right = INT_MAX;
                
                mid = matrix[i-1][j];
                
                if(j<n-1)
                    right = matrix[i-1][j+1];
                
                if(j>0)
                    left = matrix[i-1][j-1];
                
                matrix[i][j] = matrix[i][j] + min(mid, min(left, right));
            }
        }
        
        int ans = INT_MAX;
        for(int j=0; j<n; j++){
            ans = min(ans, matrix[n-1][j]);
        }
        return ans;
    }
};
class Solution {
public:
    int solve(int n){
        vector<int>dp(n+1, INT_MAX);
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            int mn = INT_MAX;
            for(int j=1;j<=sqrt(i);j++){
                int count = 1 + dp[i-(j*j)];
                mn = min(mn, count);
            }
            dp[i] = mn;
        }
        return dp[n];
    }
    
    int numSquares(int n) {
        return solve(n);
    }
};
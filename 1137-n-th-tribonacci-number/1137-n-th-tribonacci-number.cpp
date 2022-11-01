class Solution {
public:
    int tribonacci(int n) {
        int dp[50];
        memset(dp,-1,sizeof(dp));
        return solve(n,dp);
    }
    int solve(int n, int dp[50]){
        if(n==0)
            return n;
        if(n==2 || n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];    
        return dp[n] = solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
    }
};
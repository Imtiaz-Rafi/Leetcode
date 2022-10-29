class Solution {
public:
    
    int climbStairs(int n) {
        long long int dp[50];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=1;i<=45;i++){
            dp[i+1] = dp[i-1]+dp[i];
        }
        
        return dp[n];
    }
};
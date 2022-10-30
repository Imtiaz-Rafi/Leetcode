class Solution {
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1010];
        memset(dp,-1,sizeof(dp));
        return min(solve(cost.size()-1,cost,dp),solve(cost.size()-2,cost,dp));
    }
    int solve(int i,vector<int>& cost,int dp[1010]){
        if(i<=1){
            return dp[i] = cost[i];
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i] =  min(cost[i]+solve(i-1,cost,dp),cost[i]+solve(i-2, cost, dp));
    }
};
class Solution {
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1010][1010];
        memset(dp,-1,sizeof(dp));
        return solve(0,cost,dp);
    }
    int solve(int i,vector<int>& cost,int dp[1010][1010]){
        if(i>=cost.size()-1){
            return 0;
        }
        if(dp[i][cost[i]]!=-1){
            return dp[i][cost[i]];
        }
        return dp[i][cost[i]] =  min(cost[i]+solve(i+1,cost,dp),cost[i+1]+solve(i+2,cost,dp));
    }
};
class Solution {
    int dp[20][10100];
public:
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int res = solve(0,coins,amount);
        return res==INT_MAX-1?-1:res;
    }
    int solve(int i,vector<int>& coins, int amount){
        if(i>=coins.size() || amount<=0){
            return (amount==0)?0:INT_MAX-1;
        }
        else if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        return dp[i][amount] = min((1+solve(i,coins,amount-coins[i])),(0+solve(i+1,coins,amount)));
    }
};
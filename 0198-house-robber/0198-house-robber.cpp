class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int dp[110][500];
        memset(dp,-1,sizeof(dp));
        return max(solve(0,nums,dp),solve(1,nums,dp));
    }
    int solve(int i,vector<int>& nums,int dp[110][500]){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i][nums[i]]!=-1)
            return dp[i][nums[i]];
        return dp[i][nums[i]] =nums[i]+max(solve(i+2,nums,dp),solve(i+3,nums,dp));
    }
};
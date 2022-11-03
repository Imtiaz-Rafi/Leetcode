class Solution {
public:
    
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int dp[110][1010];
        int dp1[110][1010];
        int dp2[110][1010];
        memset(dp,-1,sizeof(dp));
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));
        return max(solve(0,1,0,nums,dp),max(solve(1,2,0,nums,dp1),solve(2,2,0,nums,dp2)));
    }
    int cnt = 0;
    int solve(int i,int ok,int res,vector<int>& nums, int dp[110][1010]){
        cnt++;
        if(ok==1 && i>=nums.size()-1){
            return 0;
        }
        if(ok==2 && i>=nums.size()){
            return 0;
        }
        if(dp[i][nums[i]]!=-1){
            // cout<<dp[i][nums[i]]<<" "<<i<<" "<<cnt<<endl;
            return dp[i][nums[i]];
        }
            
        
        return dp[i][nums[i]]= nums[i]+max(solve(i+2,ok,res,nums,dp),solve(i+3,ok,res,nums,dp));
    }
};
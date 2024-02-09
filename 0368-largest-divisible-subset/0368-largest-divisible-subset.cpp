class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int sz = nums.size();
        int dp[sz+1][2];
        int mx = -1, ind = -1;
        vector<int>v;
        
        dp[0][1] = 0;
        dp[0][0] = 0;
        
        for(int i=1;i<=sz;i++){
            dp[i][0] = 0;
            dp[i][1] = 0;
            for(int j=i-1;j>0;j--){
                if(nums[i-1]%nums[j-1]==0 && dp[j][0]>dp[i][0]){
                    dp[i][0] = dp[j][0];
                    dp[i][1] = j;
                }
            }
            dp[i][0]++;
            // cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
            if(mx<dp[i][0]){
                mx = dp[i][0];
                ind = i;
            }
        }
        
        v.push_back(nums[ind-1]);
        while(dp[ind][1]>0){
            // cout<<ind<<" "<<dp[ind][1]<<" "<<nums[ind-1]<<endl;
            ind = dp[ind][1];
            v.push_back(nums[ind-1]);
        }
        return v;
    }
};
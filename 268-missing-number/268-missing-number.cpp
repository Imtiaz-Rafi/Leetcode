class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int ans = n;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
            res^=i;
            //cout<<ans<<" "<<res<<endl;
        }
        return ans^res;
    }
};
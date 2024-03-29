class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        long long int ans = 0;
        for(int i=0,j=0;i<nums.size();i++){
            k -= (mx==nums[i]);
            while(k==0){
                k += (mx==nums[j++]);
            }
            ans += j;
        }
        return ans;
    }
};
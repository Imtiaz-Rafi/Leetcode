class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long int l = -1, r = -1, bad_ind = -1, res = 0;
        for(int i=0;i<nums.size();i++){
            if(!(minK<=nums[i] && maxK>=nums[i])){
                bad_ind = i;
            }
            if(minK == nums[i]){
                l = i;
            }

            if(maxK == nums[i]){
                r = i;
            }
            res += max(0LL, min(r,l)-bad_ind);
        }
        return res;
    }
};
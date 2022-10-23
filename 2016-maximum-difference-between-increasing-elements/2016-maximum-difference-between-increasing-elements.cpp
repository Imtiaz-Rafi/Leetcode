class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i,j,mx = -1;
        for(i=0;i<nums.size();i++){
            for(j=nums.size()-1;j>i;j--){
                if(nums[i]<nums[j]){
                    mx = max(mx,nums[j]-nums[i]);
                }
            }
        }
        return mx;
    }
};
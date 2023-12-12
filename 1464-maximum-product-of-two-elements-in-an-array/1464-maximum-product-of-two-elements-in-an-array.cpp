class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums.size();
        int x = nums[a-1];
        int y = nums[a-2];
        return ((x-1)*(y-1));
    }
};
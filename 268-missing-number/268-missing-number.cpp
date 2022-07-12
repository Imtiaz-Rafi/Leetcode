class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        n = n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            res+=nums[i];
        }
        return n-res;
    }
};
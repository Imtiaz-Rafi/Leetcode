class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto x:nums){
            x = abs(x);
            if(nums[x-1] < 0)
                return x;
                
            nums[x-1] *= -1;
        }
        return -1;
    }
};
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX, b = INT_MAX, c = INT_MAX, x = 0, y = 0, z = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=a){
                a = nums[i];
                x = i;
            }
            if(nums[i]<=b && a<nums[i]){
                b = nums[i];
                y = i;
            }
            if(nums[i]<=c && a<nums[i] && b<nums[i]){
                c = nums[i];
                z = i;
                return true;
            }
        }
        return false;
    }
};
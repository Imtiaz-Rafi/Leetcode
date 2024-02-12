class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                count++;
            }else{
                count = 1;
            }
            if(count * 2 >= nums.size())
                res = nums[i];
        }
        return res;
    }
};
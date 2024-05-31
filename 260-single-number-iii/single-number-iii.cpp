class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i]!=nums[i+1]){
                v.push_back(nums[i]);
            }else if(i==nums.size()-1 && nums[i]!=nums[i-1]){
                v.push_back(nums[i]);
            }else{
                i++;
            }
        }
        return v;
    }
};
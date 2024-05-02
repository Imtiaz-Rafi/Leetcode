class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int>m;
        for(auto x:nums){
            m[x]++;
        }
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            if(m[(nums[i] * (-1))]>0){
                return abs(nums[i]);
            }
        }
        return -1;
    }
};
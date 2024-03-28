class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0,j = 0, res = 0; 
        map<int, int>m;
        while(i<nums.size()){
            m[nums[i]]++;
            while(m[nums[i]] > k && i>=j) {
                m[nums[j]]--;
                j++;
            };
            res = max(res, (i-j+1));
            i++;
        }
        return res;
    }
};
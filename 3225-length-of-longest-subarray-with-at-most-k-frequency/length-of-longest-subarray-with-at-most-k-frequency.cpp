class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0,j = 0, res = 0; 
        unordered_map<int, int>m;
        while(i<nums.size()){
            if(m[nums[i]]+1 > k && i>=j){
                m[nums[j]]--;
                j++;
            }else{
                res = max(res, (i-j+1));
                m[nums[i]]++;
                i++;
            }
        }
        return res;
    }
};
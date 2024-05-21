class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>path;
        backtrack(0, nums, path, res);
        return res;
    }

    void backtrack(int ind, vector<int>nums, vector<int>&path, vector<vector<int>>&res){
        res.push_back(path);
        for(int i=ind;i<nums.size();i++){
            path.push_back(nums[i]);
            backtrack(i+1, nums, path, res);
            path.pop_back();
        }
    }
};
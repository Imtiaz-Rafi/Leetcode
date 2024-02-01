class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        vector<int>v;
        vector<vector<int>>vec;
        for(int i=0;i<nums.size();i++){
            if(i%3==2){
                int temp = abs(nums[i]-v[0]);
                if(temp<=k){
                    v.push_back(nums[i]);
                }else{
                    vec.clear();
                    return vec;
                }
                vec.push_back(v);
                v.clear();
            }else if(i%3==0){
                v.push_back(nums[i]);
            }else{
                int temp = abs(nums[i]-v[0]);
                if(temp<=k){
                    v.push_back(nums[i]);
                }else{
                    vec.clear();
                    return vec;
                }
            }
        }
        return vec;
    }
};
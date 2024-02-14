class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,vec;
        for(auto x:nums){
            if(x>=0){
                v1.push_back(x);
            }else{
                v2.push_back(x);
            }
        }
        for(int i=0;i*2<nums.size();i++){
            vec.push_back(v1[i]);
            vec.push_back(v2[i]);
        }
        return vec;
    }
};
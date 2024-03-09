class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(), nums1.end());
        for(auto x:nums2){
            if(s.count(x)>0){
                return x;
            }
        }
        return -1;
    }
};
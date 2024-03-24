class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>m;
        for(auto x:nums){
            m[x]++;
            if(m[x]==2){
                return x;
            }
        }
        return -1;
    }
};
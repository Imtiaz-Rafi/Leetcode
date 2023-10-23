class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int>m;
        int count = 0;
        for(auto x:nums){
            m[x]++;
            if(m[x]>1){
                count+=m[x]-1;
            }
        }
        return count;
    }
};
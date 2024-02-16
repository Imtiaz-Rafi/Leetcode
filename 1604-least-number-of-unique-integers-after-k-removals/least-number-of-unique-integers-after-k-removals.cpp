class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int>m;
        int count = 0;
        for(auto x:arr){
            m[x]++;
        }
        vector<pair<int, int>>v{m.begin(), m.end()};
        sort(v.begin(), v.end(), [](pair<int, int>l, pair<int, int>r){ return l.second < r.second; });
        for(auto x:v){
            if(k<x.second){
                count++;
            }
            if(k>0){
                k-=x.second;
            }
        }
        return count;
    }
};
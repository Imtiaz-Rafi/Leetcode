class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,mp;
        for(auto x:arr){
            m[x]++;
        }
        for(auto x:m){
            if(mp.find(x.second)!=mp.end()){
                return false;
            }
            mp[x.second]++;
        }
        return true;
    }
};
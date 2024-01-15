class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>vec;
        vector<int>v1,v2;
        map<int,int>m;
        
        for(auto x:matches){
            int b = x[1];
            m[b]++;
        }
        
        for(auto x:matches){
            int a = x[0];
            if(m[a]==0){
                v1.push_back(a);
                m[a] = -1;
            }
        }
        for(auto x:matches){
            int a = x[1];
            if(m[a]==1){
                v2.push_back(a);
                m[a] = -1;
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        vec.push_back(v1);
        vec.push_back(v2);
        
        return vec;
    }
};
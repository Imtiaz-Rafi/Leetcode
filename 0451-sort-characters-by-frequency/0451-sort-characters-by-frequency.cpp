class Solution {
public:
    string frequencySort(string s) {
        map<char, int>mp;
        for(auto x:s) mp[x]++;
        
        vector<pair<char, int>> v {mp.begin(), mp.end()};
        
        sort(v.begin(), v.end(), [](pair<char, int> l, pair<char, int> r)
        {
            return l.second > r.second;
        });
        
        string str;
        for(auto x:v){
            while(x.second>0){
                str+=x.first;
                x.second--;
            }
        }
        return str;
    }
};
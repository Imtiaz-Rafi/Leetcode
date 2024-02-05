class Solution {
public:
    string frequencySort(string s) {
        map<char, int>mp;
        for(auto x:s) mp[x]++; // m[A] = 1, m[a] = 1, m[b] = 2
        
        vector<pair<char, int>> vec {mp.begin(), mp.end()}; // {A, 1}, {a,1}, {b,2}
        
        sort(vec.begin(), vec.end(), [](pair<char, int> l, pair<char, int> r)
        {
            return l.second > r.second;
        });
        // {b, 2}, {A,1}, {a,1}
        
        string str;
        for(auto x:vec){
            while(x.second>0){
                str+=x.first;
                x.second--;
            }
        }
        return str;
    }
};
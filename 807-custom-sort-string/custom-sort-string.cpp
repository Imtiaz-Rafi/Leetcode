class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int>m;

        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }

        string res;
        for(auto x:order){
            if(m.find(x) != m.end()){
                res.append(m[x], x);
                m.erase(x);
            }
        }

        for(auto x:m){
            res.append(x.second, x.first);
        }
        return res;
    }
};
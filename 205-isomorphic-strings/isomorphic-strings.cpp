class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char>m, m1;
        for(int i=0;i<s.size();i++){
            if(!m[s[i]] && !m1[t[i]]){
                m[s[i]] = t[i];
                m1[t[i]] = s[i];
            }else{
                if(m[s[i]]!=t[i] || m1[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
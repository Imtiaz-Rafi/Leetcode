class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        else
        {
            map<int,int>m, m1;
            for(auto x:word1){
                m[x-'a']++;
            }
            for(auto x:word2){
                if(m[x-'a']==0)
                    return false;
                m1[x-'a']++;
            }
            
            multiset<int>s,s1;
            for(auto x:m) s.insert(x.second);
            for(auto x:m1) s1.insert(x.second);
            
            return s==s1;
        }
    }
};
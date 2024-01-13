class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        for(auto x:s)
            m[x]++;
        
        int count = 0;
        for(auto x:t){
            if(m[x]>0){
                m[x]--;
            }else{
                count++;
            }
        }
        return count;
    }
};
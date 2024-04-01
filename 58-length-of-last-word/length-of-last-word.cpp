class Solution {
public:
    int lengthOfLastWord(string s) {
        string res;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                if(res.size() > 0)
                    return res.size();
            }else{
                res += s[i];
            }
        }
        return res.size();
    }
};
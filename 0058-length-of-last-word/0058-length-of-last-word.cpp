class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0,ok=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                if(ok==0)
                    continue;
                else
                    return len;
            }else{
                ok = 1;
                len++;
            }
        }
        return len;
    }
};
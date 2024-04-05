class Solution {
public:
    string makeGood(string s) {
        int i=1,j=0;
        string res;
        while(i<s.size() && j<i){
            if((s[i]==(s[j]+32)) || ((s[i]+32) == s[j])){
                s.erase(j, 2);
                j--;
                i--;
                if(j==-1){
                    j = i;
                }
                if(i==0){
                    i = 1;
                }
            }else{
                j++;
                i++;
            }
        }
        return s;
    }
};
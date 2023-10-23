class Solution {
public:
    string reverseWords(string s) {
        string s1;
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                s1=s1 + t + ' ';
                t = "";
            }else if(i==s.size()-1){
                s1=s1 + s[i] + t;
            }else{
                t = s[i]+t;
            }
        }
        return s1;
    }
};
class Solution {
public:
    string reverseVowels(string s) {
        string st;
        for(auto x:s){
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
                st+=x;
            }
        }
        int j = st.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i] == 'o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i] == 'I' || s[i] == 'O' || s[i]=='U'){
                s[i] = st[j];
                j--;
            }
        }
        return s;
    }
};
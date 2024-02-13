class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto s:words){
            bool ok = true;
            for(int i=0,j=s.size()-1;i<j;i++,j--){
                if(s[i]!=s[j]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                return s;
            }
        }
        return "";
    }
};
class Solution {
public:
    int minimumLength(string s) {
        int i=0, j=s.size()-1;
        while(i<=j){
            if(i==j)
                return 1;
            if(s[i]==s[j]){
                char temp = s[i];
                while(s[i]==temp && i<=j){
                    i++;
                }
                while(s[j]==temp && i<=j){
                    j--;
                }
            }else{
                return j-i+1;
            }
        }
        return 0;
    }
};
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int j = 0;
        int gcd = __gcd(str1.size(),str2.size());
        string temp="",ans = "";
        if(str1+str2==str2+str1){
            for(int i=0;i<gcd;i++){
                ans+=str1[i];
            }
        }
        return ans;
    }
};
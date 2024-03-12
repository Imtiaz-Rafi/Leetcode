class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int gcd = __gcd(str1.size(), str2.size());
        string res;
        if(str1+str2 == str2+str1){
            for(int i=0;i<gcd;i++){
                res+=str1[i];
            }
        }
        return res;
    }
};
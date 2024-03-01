class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0, zero = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        string res;
        while(one>1){
            res+='1';
            one--;
        }
        while(zero){
            res+='0';
            zero--;
        }
        if(one==1){
            res+='1';
        }
        return res;

    }
};
class Solution {
public:
    int minOperations(string s) {
        int ans = 0, ans1 = 0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='1'){
                    ans1++;
                }else{
                    ans++;
                }
            }else{
                if(s[i]=='0'){
                    ans1++;
                }else{
                    ans++;
                }
            }
        }
        return min(ans,ans1);
    }
};
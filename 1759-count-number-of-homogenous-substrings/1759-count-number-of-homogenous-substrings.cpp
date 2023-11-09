class Solution {
    const long long int MOD = 1e9+7;
public:
    int countHomogenous(string s) {
        int ans = 0;
        for(int i=0,j=0;i<s.size();i++){
            if(s[i]==s[j]){
                ans+=(i-j+1)%MOD;
            }else{
                j = i;
                ans++;
            }
            ans = ans%MOD;
        }
        return ans;
    }
};
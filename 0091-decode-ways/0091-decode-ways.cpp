class Solution {
public:
    int numDecodings(string s) {
        int dp[500];
        memset(dp,0,sizeof(dp));
        return solve(0,s,dp);
    }
    int solve(int i,string s,int dp[110]){
        if(s[i]=='0'){
            return 0;
        }
        if(i>=s.size()-1){
            return 1;
        }
        
        if(dp[i]!=0){
            return dp[i];
        }
        dp[i] = solve(i+1,s,dp);
        if(i+1<s.size() && (s[i]=='1' || (s[i]=='2' && s[i+1]>='0' && s[i+1]<='6')))
            dp[i]+=solve(i+2,s,dp);
        return dp[i];
    }
};
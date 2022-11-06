class Solution {
public:
    int countSubstrings(string s) {
        int i,j;
        int n = s.size();
        int cnt = n;
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        for(i=0;i<n;i++){
            dp[i][i] = true;
        }
        for(i=n-1;i>=0;i--){
            for(j=i+1;j<n;j++){
                if(s[i]==s[j] && (j-i==1 || dp[i+1][j-1])){
                    dp[i][j] = true;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
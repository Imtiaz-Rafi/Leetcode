class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(), count = 0;
        int dp[n][n];

        memset(dp, false, sizeof(dp));

        for(int i=0;i<n;i++){
            dp[i][i] = true;
            count++;
        }

        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(s[i]==s[j] && (i-j==1 || dp[i-1][j+1])){
                    count++;
                    dp[i][j] = true;
                    // cout<<i<<" "<<j<<" "<<s[i]<<" "<<count <<endl;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
        int ind = 0,mx = 1,i,j,k;
        int n = s.size();
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        for(i=0;i<n;i++){
            dp[i][i] = true;
        }
        for(i=n-1;i>=0;i--){
            for(j=i+1;j<n;j++){
                if((s[i]==s[j]) && (j-i==1 || dp[i+1][j-1])){
                    dp[i][j] = true;
                    if(mx<(j-i+1)){
                        mx = j-i+1;
                        ind = i;
                    }
                }
            }
        }
        
        string str;
        for(i=ind;i<ind+mx;i++)
            str+=s[i];
        return str;
    }
};
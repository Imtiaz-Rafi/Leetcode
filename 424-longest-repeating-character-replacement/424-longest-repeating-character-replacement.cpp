class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m;
        int ans = 0,mx = 0;
        for(int i=0,j=0;i<s.size();i++){
            m[s[i]]++;
            mx = max(mx,m[s[i]]); // Max Character Occurance
            while((i-j+1-mx)>k && j<=i){  // Window - max_occur
                m[s[j]]--;
                mx = max(mx,m[s[j]]);
                j++;
            }
            ans = max(ans,i-j+1); // Window
        }
        return ans;
    }
};
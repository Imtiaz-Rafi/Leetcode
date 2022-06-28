class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int pos = 0,ans = 0;
        int arr[256] = {0};
        for(int i=0;i<s.size();i++){
            pos = max(pos,arr[s[i]]);
            ans = max(ans,i-pos+1);
            arr[s[i]] = i+1;
        }
        return ans;
    }
};
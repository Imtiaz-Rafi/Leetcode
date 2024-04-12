class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>pref(n), suff(n);

        pref[0] = height[0];
        suff[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            pref[i] = max(pref[i-1], height[i]);
        }
        for(int i=n-2;i>=0;i--){
            suff[i] = max(suff[i+1], height[i]);
        }

        int total = 0;
        for(int i=0;i<n;i++){
            total += (min(pref[i], suff[i]) - height[i]);
        }
        return total;
    }
};
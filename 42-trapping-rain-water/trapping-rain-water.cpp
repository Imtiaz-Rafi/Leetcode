class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1, ans = 0, lmax = INT_MIN, rmax = INT_MIN;
        while(l<r){
            lmax = max(height[l], lmax);
            rmax = max(height[r], rmax);

            ans+= (lmax < rmax) ? (lmax - height[l++]) : (rmax - height[r--]);
        }
        return ans;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        for(int i=0,j=height.size()-1;i<j;){
            int temp = min(height[i],height[j])*(j-i);
            ans = max(ans,temp);
            if(height[i]<=height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};
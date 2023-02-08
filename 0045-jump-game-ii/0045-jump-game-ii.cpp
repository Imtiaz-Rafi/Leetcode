class Solution {
public:
    int jump(vector<int>& nums) {
        int j = 0,mx = 0,cnt = 0;
        for(int i=0;i<nums.size()-1;i++){
            mx = max(mx,i+nums[i]);
            if(i==j){
                cnt++;
                j = mx;
            }
            if(j>=nums.size()){
                return cnt;
            }
        }
        return cnt;
    }
};
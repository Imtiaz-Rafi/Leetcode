class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j = 0,mx = 0;
        for(int i=0;i<nums.size()-1;i++){
            mx = max(mx,i+nums[i]);
            if(mx==i){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res = 1, cnt = 0;
        for(int i=0, j=0;i<nums.size() && i>=j;i++){
            res *= nums[i];
            while(res >= k && j<=i){
                res /= nums[j];
                j++;
            }
            cnt += (i-j+1);
        }
        return cnt;
    }
};
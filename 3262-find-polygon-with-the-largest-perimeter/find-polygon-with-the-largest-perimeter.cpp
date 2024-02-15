class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long int res = 0, count = 0, ans = -1; 
        for(auto x:nums){
            if(count>=2 && x<res){
                ans=x+res;
            }
            res+= x;
            count++;
        }
        return ans;
    }
};
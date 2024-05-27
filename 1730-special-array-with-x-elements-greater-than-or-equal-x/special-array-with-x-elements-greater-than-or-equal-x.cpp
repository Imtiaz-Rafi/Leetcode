class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1;i<=nums.size();i++){
            int count = 0;
            for(int j=nums.size()-1;j>=0;j--){
                if(nums[j]>=i){
                    count++;
                }else{
                    break;
                }
            }
            if(count==i)
                return count;
        }
        return -1;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0,r = nums.size()-1;
        int ok = -1;
        while(l<=r){
            //cout<<l<<" "<<r<<endl;
            int mid = (r+l+1)/2;
            if(nums[mid]==target){
                ok = mid;
                break;
            }else if(nums[mid]>target){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ok;
    }
};
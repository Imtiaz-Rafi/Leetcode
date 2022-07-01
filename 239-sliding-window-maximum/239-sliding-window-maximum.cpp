class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>m;
        int r = 0,l = 0;
        while(l<=r && r<nums.size()){
            if(r-l+1<k){
                // cout<<nums[r]<<endl;
                m[nums[r]]++;
                r++;
                
            }else{
                m[nums[r]]++;
                // cout<<"heda"<<nums[r]<<endl;
                
                ans.push_back(m.rbegin()->first);
                if(m[nums[l]]>1){
                    m[nums[l]]--;
                }else{
                    m.erase(nums[l]);
                }
                r++;
                l++;
            }
        }
        return ans;
    }
};
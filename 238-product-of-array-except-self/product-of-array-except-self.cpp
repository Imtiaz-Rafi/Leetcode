class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans = 1, neg = 0;
        for(auto x:nums){
            if(x!=0){
                ans = ans * x;
            }else{
                neg++;
            }
        }
        vector<int>v;
        for(auto x:nums){
            if(neg>0){
                if(neg==1 && x==0)
                    v.push_back(ans);
                else
                    v.push_back(0);
            }else{
                v.push_back(ans/x);
            }
        }

        return v;
    }
};
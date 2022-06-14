class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            long long int ans = 1;
            for(auto x:m){
                if(x.first==nums[i]){
                    if(x.second-1>0){
                        ans*= (pow(x.first,(x.second-1)));
                    }
                    
                }else{
                    ans*= (pow(x.first,x.second));
                }
                //cout<<x.first<<":"<<ans<<endl;
            }
            v.push_back(ans);
        }
        return v;
        
    }
};
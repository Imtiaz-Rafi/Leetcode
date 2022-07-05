class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long int l = 1;
        long long int r = accumulate(candies.begin(),candies.end(),0LL)/k;
        while(l<=r){
            long long int mid = (l+r+1)/2;
            long long int ans = 0;
            for(int i=0;i<candies.size();i++){
                ans+= (candies[i]/mid);
            }
            if(ans>=k){
                l = mid+1;
            }else{
                r = mid-1;
            }
            // cout<<l<<" "<<r<<" "<<ans; 
        }
        return l-1;
    }
};
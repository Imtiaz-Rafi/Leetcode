class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        while(l<=r){
            int mid = (l+r+1)/2;
            int ans = 0;
            // cout<<mid<<" ";
            for(int i=0;i<piles.size();i++){
                ans+= ((piles[i]+(mid-1))/mid);
                // cout<<ans<<" ";
            }
            // cout<<ans<<endl;
            if(ans<=h){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return r+1;
    }
};
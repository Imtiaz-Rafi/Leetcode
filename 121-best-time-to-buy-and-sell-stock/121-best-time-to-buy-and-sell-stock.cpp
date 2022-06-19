class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = INT_MAX,mn = -1;
        int ans = 0;
        for(int i=0;i<prices.size();i++){
            if(mx==INT_MAX){
                mx = min(prices[i],mx);
            }else{
                ans = max(ans, prices[i]-mx);
                mx = min(prices[i],mx);
            }
        }
        return ans;
    }
};
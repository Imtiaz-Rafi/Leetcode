class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }

        vector<pair<int,int>>v{m.begin(), m.end()};
        sort(v.begin(), v.end(), [](pair<int, int>l, pair<int, int>r){ return l.second > r.second; });
        int res = v[0].second, ans = 0;
        for(auto x:v){
            if(x.second!=res){
                break;
            }
            ans+=x.second;
        }
        return ans;
    }
};
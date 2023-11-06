class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<pair<int,int>> v;
        vector<int>newArr;
        
        for(auto x:arr){
            int bit = __builtin_popcount(x);
            v.push_back(make_pair(x, bit));
        }
        
        sort(v.begin(), v.end(), [&](const pair<int,int> &a,const pair<int,int> &b){return a.second==b.second? a.first<b.first : a.second<b.second;});
        
        for(auto x:v){
            // cout<< x.first<< " "<< x.second<<endl;
            newArr.push_back(x.first);
        }
            
        
        return newArr;
    }
};
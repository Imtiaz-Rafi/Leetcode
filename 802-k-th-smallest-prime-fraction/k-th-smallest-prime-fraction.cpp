class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double, pair<int, int>>> vp;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double x = arr[i]/(double)arr[j];
                vp.push_back({x, {arr[i], arr[j]}});
            }
        }
        sort(vp.begin(), vp.end());
        vector<int>v;
        v.push_back(vp[k-1].second.first);
        v.push_back(vp[k-1].second.second);
        return v;
    }
};
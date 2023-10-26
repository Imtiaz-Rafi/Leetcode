class Solution {
public:
    const long long int MOD = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<long long int, long long int>m;
        int count = 0;
        
        for(auto x:arr){
            m[x]++;
        }
        
        for(int i=1;i<arr.size();i++){
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0 && m.find(arr[i]/arr[j])!=m.end()){
                    m[arr[i]] = (m[arr[i]] + (m[arr[j]]* m[arr[i]/arr[j]]) % MOD) % MOD;
                    // cout<< m[arr[i]]<<endl;
                }
            }
        }
        
        for(auto x:m){
            count = (count+x.second)%MOD;
        }
        
        return count%MOD;
    }
};
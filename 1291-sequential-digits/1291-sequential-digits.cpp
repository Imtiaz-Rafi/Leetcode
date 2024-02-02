class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v,res;
        for(int i=1;i<=9;i++){
            int ans = i;
            for(int j=i;j<9;j++){
                ans = (ans*10)+(j+1);
                v.push_back(ans);
            }
            
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]>=low && v[i]<=high){
                res.push_back(v[i]);
            }
        }
        return res;
    }
};
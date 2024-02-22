class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>v(n+1, -1), v1(n+1, 0);
        for(auto x:trust){
            v[x[0]] = 1;
            v1[x[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(v[i]==-1 && v1[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};
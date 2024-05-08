class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>ans;
        vector<int>v = score;
        sort(v.begin(), v.end(), greater<int>());
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]] = i;
        }
        for(int i=0;i<n;i++){
            if(m[score[i]]==0){
                ans.push_back("Gold Medal");
            }else if(m[score[i]]==1){
                ans.push_back("Silver Medal");
            }else if(m[score[i]]==2){
                ans.push_back("Bronze Medal");
            }else{
                int temp = m[score[i]] + 1;
                ans.push_back(to_string(temp));
            }
        }
        return ans;
    }
};
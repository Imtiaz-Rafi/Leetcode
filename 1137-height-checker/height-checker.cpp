class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v = heights;
        sort(v.begin(), v.end());
        int count = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=heights[i])
                count++;
        }
        return count;
    }
};
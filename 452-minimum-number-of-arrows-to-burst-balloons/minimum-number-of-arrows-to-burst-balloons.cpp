class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const auto &a, const auto &b){ return a[0] < b[0]; });

        int arrow = 1;
        int end = points[0][1];
        for(auto x:points){
            if(x[0] > end){
                end = x[1];
                arrow++;
            }else{
                end = min(x[1], end);
            }
        }
        return arrow;
    }
};
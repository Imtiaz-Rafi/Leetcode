class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int>height(cols+1, 0);
        int mxArea = 0;

        for(auto row:matrix){
            for(int i=0;i<cols;i++){
                height[i] = (row[i] == '1') ? height[i]+1 : 0; 
            }

            stack<int>s;
            for(int i=0; i<height.size(); i++){
                while(!s.empty() && height[i] < height[s.top()]){
                    int h = height[s.top()];
                    s.pop();
                    int w = s.empty() ? i : i-s.top() - 1;
                    mxArea = max(mxArea, h*w);
                }
                s.push(i);
            }
        }
        return mxArea;
    }
};
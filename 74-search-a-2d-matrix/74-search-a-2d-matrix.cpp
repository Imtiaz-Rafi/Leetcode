class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ok = false;
        int m = matrix.size();
        for(int i=0;i<m;i++){
            int n = matrix[i].size();
            int l = 0;
            int r =  n-1;
            while(l<=r){
                int mid = (l+r+1)/2;
                if(matrix[i][mid]==target){
                    ok = true;
                    break;
                }else if(matrix[i][mid]>target){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }
            if(ok)
                break;
        }
        return ok;
    }
};
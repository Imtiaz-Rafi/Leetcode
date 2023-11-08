class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x = abs(sx-fx);
        int y = abs(sy-fy);
        int ans = max(x,y);
        if(ans<=t){
            if(ans==0 && t==1){
                return false;
            }else
                return true;
        }
        else
            return false;
    }
};
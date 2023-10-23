class Solution {
public:
    bool isPowerOfFour(int n) {
        int x = n;
        while(x%4==0 && x>0){
            x = x/4;
        }
        if(x==1)
            return true;
        else
            return false;
    }
};
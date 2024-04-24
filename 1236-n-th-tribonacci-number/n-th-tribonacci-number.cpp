class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        if(n<=2)
            return 1;
        int x = 0;
        int y = 1;
        int z = 1;
        for(int i=3;i<=n;i++){
            int temp = x + y + z;
            x = y;
            y = z;
            z = temp;
        }
        return z;
    }
};
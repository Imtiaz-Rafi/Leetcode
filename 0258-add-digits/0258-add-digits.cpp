class Solution {
public:
    int addDigits(int num) {
        
        int arr[9] = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
        
        while(num>=10){
            int temp = num, ans = 0;
            for(int i=8;i>=0;i--){
                if(arr[i]<=temp){
                    ans += temp%arr[i];
                    temp = temp/arr[i]; 
                }
            }
            num = ans+temp;
        }
        
        return num;
    }
};
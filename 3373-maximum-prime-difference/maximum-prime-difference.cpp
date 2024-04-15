class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int x = INT_MAX, y = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                // cout<<i<<endl;
                x = min(x, i);
                y = max(y, i);
            }
        }
        return (y-x);
    }

    bool isPrime(int x){
        if(x==2 || x==3)
            return true;

        if(x==1 || x%2==0 || x%3==0)
            return false;
        
        for(int i=3;i*i<=x;i+=2){
            if(x%i==0)
                return false;
        }
        return true;
    }
};
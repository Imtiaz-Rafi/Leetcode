class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int>a = flowerbed;
        for(int i=0;i<a.size();i++){
            if(a[i]==0 && (i==0 || a[i-1]==0) && (i==a.size()-1 || a[i+1]==0)){
                a[i] = 1;
                n--;
                if(n<=0)
                    return true;
            }
        }
        return n==0;
    }
};
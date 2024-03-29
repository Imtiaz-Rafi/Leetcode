class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int>a = flowerbed;
        int count = 0;
        for(int i=0;i<a.size();i++){
            if(i==0){
                if(a[i]==0){
                    if(a.size()==1){
                        count++;
                        a[i] = 1;
                    }else if(a[i+1]==0){
                        count++;
                        a[i] = 1;
                    }
                }
            }else if(i==a.size()-1){
                if(a[i]==0){
                    if(a.size()==1){
                        count++;
                        a[i] = 1;
                    }
                    else if(a[i-1]==0){
                        count++;
                        a[i] = 1;
                    }
                }
            }else if(i>0 && i<a.size()-1 && a[i]==0 && a[i-1]==0 && a[i+1]==0){
                count++;
                a[i] = 1;
            }
        }
        if(count>=n){
            return true;
        }else
            return false;
    }
};
class Solution {
    
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        int i=0,j=0,mx = 0;
        for(i=0;i<fruits.size();i++){
            m[fruits[i]]++;
            while(m.size()>2){
                m[fruits[j]]--;
                if(m[fruits[j]]==0){
                    m.erase(fruits[j]);
                }
                j++;
            }
            mx = max(mx,i-j+1);
        }
        return mx;
    }
};
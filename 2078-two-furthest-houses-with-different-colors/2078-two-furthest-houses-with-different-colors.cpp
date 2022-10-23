class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i,j,mx = 0;
        for(i=0;i<colors.size();i++){
            for(j=colors.size()-1;j>i;j--){
                if(colors[i]!=colors[j]){
                    // cout<<i<<" "<<mx<<endl;
                    mx = max(mx,(j-i));
                    break;
                }
            }
            
        }
        return mx;
    }
};
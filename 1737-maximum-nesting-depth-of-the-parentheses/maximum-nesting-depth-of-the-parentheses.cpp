class Solution {
public:
    int maxDepth(string s) {
        int mx = 0, count=0;
        for(auto x:s){
            if(x=='('){
                count++;
            }else if(x==')'){
                count--;
            }
            mx = max(mx, count);
        }
        return mx;
    }
};
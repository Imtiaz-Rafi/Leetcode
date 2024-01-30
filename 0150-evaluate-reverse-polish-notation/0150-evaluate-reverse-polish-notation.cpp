class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        
        for(auto x:tokens){
            if((x[0]>='0' && x[0]<='9') || (x.size()>1 && x[0]=='-' && (x[1]>='0' && x[1]<='9'))){
                s.push(stoi(x));
            }else{
                int val1 = s.top();
                s.pop();
                int val2 = s.top();
                s.pop();
                
                int ans;
                if(x=="+"){
                    ans = val2 + val1;
                }else if(x=="-"){
                    ans = val2 - val1;
                }else if(x=="*"){
                    ans = val2 * val1;
                }else{
                    ans = val2 / val1;
                }
                s.push(ans);
            }
        }
        
        return s.top();
    }
};
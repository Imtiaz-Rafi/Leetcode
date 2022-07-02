class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            int x,y;
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                if(tokens[i]=="+"){
                    int ans = x+y;
                    st.push(ans);
                }
                else if(tokens[i]=="-"){
                    int ans = y-x;
                    st.push(ans);
                }
                else if(tokens[i]=="*"){
                    int ans = x*y;
                    st.push(ans);
                }
                else if(tokens[i]=="/"){
                    int ans = y/x;
                    st.push(ans);
                }
            }else{
                x = stoi(tokens[i]);
                st.push(x);
            }
        }
        return st.top();
    }
};
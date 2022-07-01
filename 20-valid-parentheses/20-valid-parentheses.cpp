class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        bool ok = true;
        if(s.size()%2!=0){
            ok = false;
        }else{
            for(int i=0;i<s.size();i++){
                if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                    st.push(s[i]);
                }else if(st.empty() || (s[i]==')' && st.top()!='(') || (s[i]==']' && st.top()!='[') || (s[i]=='}' && st.top()!='{')){
                        //cout<<s[i]<<" "<<st.top()<<endl;
                        ok = false;
                        break;
                    }else{
                        st.pop();
                    }
            }
            if(!st.empty()){
                ok = false;
            }
        }
        return ok;
    }
};
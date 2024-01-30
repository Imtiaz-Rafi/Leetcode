class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        
        for(auto t:tokens){
            if(t == "+" || t == "-" || t == "/" || t == "*"){
                int val1 = s.top(); 
                s.pop();
                int val2 = s.top();
                s.pop();
                
                int res = 0;
                if(t == "+") res = val2 + val1;
                if(t == "-") res = val2 - val1;
                if(t == "*") res = val2 * val1;
                if(t == "/") res = val2 / val1;
                
                s.push(res);
            }else{
                s.push(stoi(t));
            }
        }
        return s.top();
    }
};
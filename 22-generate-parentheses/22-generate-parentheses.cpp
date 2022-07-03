class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        int i = 0;
        parenthesis(s,"",0,0,n);
        return s;
    }
    void parenthesis(vector<string>&s,string temp,int left,int right,int max){
        if(temp.size()==2*max){
            //cout<<temp<<endl;
            s.push_back(temp);
            return;
        }
        if(left<max)
            parenthesis(s,temp+'(',left+1,right,max);
        if(right<left)
            parenthesis(s,temp+')',left,right+1,max);
    }
};
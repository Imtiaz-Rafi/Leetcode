class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }else if(s[i]==')'){
                count--;
            }

            if(count<0){
                v.push_back(i);
                count = 0;
            }
        }
        if(count>0){
            for(int i=s.size()-1; i>=0;i--){
                if(s[i]=='('){
                    v.push_back(i);
                    count--;
                }
                if(count==0){
                    break;
                }
            }
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            s.erase(v[i]-i, 1);
        }

        return s;
    }
};
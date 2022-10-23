class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<string,int>m;
        for(int i=0;i<strs.size();i++){
            string s;
            for(int j=0;j<strs[i].size();j++){
                s+=strs[i][j];
                m[s]++;
            }
        }
        string s = "";
        for(auto x:m){
            if(x.second!=strs.size())
                break;
            s = x.first;
            // cout<<x.first<<" "<<x.second<<endl;
        }
        return s;
    }
};
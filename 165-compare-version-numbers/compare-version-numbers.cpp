class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        string s,t;
        while(i<version1.size()){
            if(version1[i]!='.' && i<version1.size()-1){
                s+=version1[i];
                i++;
            }else{
                if(i==version1.size()-1){
                    s+=version1[i];
                }
                i++;
                while(j<version2.size()){
                    if(version2[j]!='.'){
                        t+=version2[j];
                        j++;
                    }else{
                        j++;
                        break;
                    }
                }
                int x = stoi(s);
                int y = stoi(t);
                cout<<x<<" "<<y<<endl;
                if(x<y){
                    return -1;
                }else if(x>y){
                    return 1;
                }
                s = "";
                t = "";
            }
            if(i==version1.size() || j==version2.size())
                break;
        }
        s = "";
        t = "";
        while(i<version1.size()){
            s+=version1[i];
            int x = stoi(s);
            if(x>0)
                return 1;
            if(version1[i]=='.')
                s = "";
            i++;
        }
        while(j<version2.size()){
            t+=version2[j];
            int y = stoi(t);
            if(y>0)
                return -1;
            if(version2[j]=='.')
                t = "";
            j++;
        }
        return 0;
    }
};
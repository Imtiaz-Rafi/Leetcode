class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>m,temp,m2;
        for(int i=0;i<s1.size();i++){
            m[s1[i]]++;
        }
        temp = m2 = m;
        
        int l = 0,r = 0;
        int cnt = 0;
        bool ok = false;
        while(l<=r && r<s2.size()){
            if(m[s2[r]]>0){
                if(m2[s2[r]]>0){
                    cnt = r-l+1;
                    if(cnt==s1.size()){
                        // for(int i = l;i<=r;i++){
                        //     cout<<s2[i];
                        // }
                        // cout<<endl;
                        ok = true;
                        break;
                    }
                    // else if(cnt>s1.size()){
                    //     m2[s2[l]]++;
                    //     l++;
                    // }
                    else{
                        m2[s2[r]]--;
                        r++;
                    }
                }else{
                    m2[s2[l]]++;
                    l++;
                }
            }else{
                l = r+1;
                r = r+1;
                m2 = temp;
            }
        }
        return ok;
    }
};
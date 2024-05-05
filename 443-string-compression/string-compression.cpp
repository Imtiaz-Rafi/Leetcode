class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int j = 0;
        for(int i=0;i<chars.size();i++){
            if(i>0 && chars[i]==chars[i-1]){
                count++;
            }else{
                if(count>1){
                    vector<char>v;
                    while(count>0){
                        v.push_back('0' + (count%10));
                        count = count/10;
                    }
                    for(int k=v.size()-1;k>=0;k--){
                        chars[j] = v[k];
                        j++;
                    }
                }
                count = 1;
                chars[j] = chars[i];
                j++;
            }
        }
        if(count>1){
            vector<char>v;
            while(count>0){
                v.push_back('0' + (count%10));
                count = count/10;
            }
            for(int k=v.size()-1;k>=0;k--){
                chars[j] = v[k];
                j++;
            }
        }
        return j;
    }
};
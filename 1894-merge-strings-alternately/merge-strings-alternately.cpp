class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;
        string s;
        while(i<word1.size()){
            s+=word1[i];
            i++;
            if(j<word2.size()){
                s+=word2[j];
                j++;
            }
        }
        while(j<word2.size()){
            s+=word2[j];
            j++;
        }
        return s;
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        for(int i=0;i<(s.size()+1)/2;i++){
            char temp = s[n-i];
            s[n-i] = s[i];
            s[i] = temp;
        }
    }
};
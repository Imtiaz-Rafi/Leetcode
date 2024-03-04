class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());

        int n = tokens.size();
        int i = 0, j = n-1;
        int p = power;
        int score = 0;
        while(i<=j){
            // cout<< tokens[i]<<" "<<tokens[j]<<" "<<p<<endl; 
            if(tokens[i]<=p){
                p-=tokens[i];
                score++;
                i++;
            }else{
                if(score==0 || i==j){
                    break;
                }
                p+=tokens[j];
                score--;
                j--;
            }
        }
        return score;
    }
};
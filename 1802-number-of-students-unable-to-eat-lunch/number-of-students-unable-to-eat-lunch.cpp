class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int one = 0, zero = 0;
        for(auto x:students){
            if(x)
                one++;
            else
                zero++;
        }

        for(auto x:sandwiches){
            if(x){
                if(one>0)
                    one--;
                else
                    return zero;
            }else{
                if(zero>0)
                    zero--;
                else
                    return one;
            }
        }
        return 0;
    }
};
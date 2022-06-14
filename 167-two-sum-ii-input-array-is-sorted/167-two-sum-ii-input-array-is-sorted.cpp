class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>m,m1;
        for(int i=0;i<numbers.size();i++){
            m[numbers[i]]++;
            m1[numbers[i]] = i+1;
        }
        vector<int>v;
        for(int i=0;i<numbers.size();i++){
            int temp = target-numbers[i];
            if(m[temp]>0){
                v.push_back(i+1);
                v.push_back(m1[temp]);
                break;
            }
        }
        return v;
    }
};
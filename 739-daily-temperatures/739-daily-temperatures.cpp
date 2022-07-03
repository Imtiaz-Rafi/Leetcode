class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>temp;
        temp = temperatures;
        vector<int>v(size(temp));
        for(int i=0;i<size(temp);i++){
            while(!st.empty() && temp[st.top()]<temp[i]){
                int ind = i-st.top();
                //cout<<ind<<" "<<i<<" "<<st.top()<<endl;
                v[st.top()] = ind;
                st.pop();
            }
            st.push(i);
            
        }
        return v;
    }
};
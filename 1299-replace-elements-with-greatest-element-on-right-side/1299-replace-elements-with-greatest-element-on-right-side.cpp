class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx = -1;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>mx){
                int temp = arr[i];
                arr[i] = mx;
                mx = temp;
            }else
                arr[i] = mx;
        }
        return arr;
    }
};
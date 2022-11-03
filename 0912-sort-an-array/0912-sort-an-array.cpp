class Solution {
    void merge(vector<int>& nums,int l,int m,int r){
        // Create v ← nums[l..m] and v1 ← nums[m+1..r]
        int x = m-l+1;
        int y = r-m;
        vector<int> v(x),v1(y);
        for(int i=0;i<x;i++){
            v[i] = nums[l+i];
        }
        for(int i=0;i<y;i++){
            v1[i] = nums[m+1+i];
        }
        
        // Maintain current Index of subarray and main Array
        int i = 0,j = 0,k = l;
        
        while(i<x && j<y){
            if(v[i]<=v1[j]){
                nums[k] = v[i];
                i++;
            }else{
                nums[k] = v1[j];
                j++;
            }
            k++;
        }
        
        while(i<x){
            nums[k] = v[i];
            i++;
            k++;
        }
        while(j<y){
            nums[k] = v1[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& nums,int l,int r){
        if(l<r){
            int m = (l+r)/2;
            mergeSort(nums,l,m);
            mergeSort(nums,m+1,r);
        
            merge(nums,l,m,r);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
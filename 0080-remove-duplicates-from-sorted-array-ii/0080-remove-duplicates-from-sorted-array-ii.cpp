class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>2){
                cnt++;
            }else{
                nums[i-cnt] = nums[i];
            }
        }
        return nums.size()-cnt;
    }
};
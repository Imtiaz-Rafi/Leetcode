class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        vector<int>bitArray(32,0);
        int i=0, j=0, ans = INT_MAX;
        while(i<nums.size()){
            for(int bit = 0; bit<32; bit++){
                if(nums[i] & (1LL<<bit)){
                    bitArray[bit]++;    // Expanding Window;
                }
            }

            int val = 0;
            for(int bit=0; bit < 32; bit++){
                if(bitArray[bit]){
                    val += (1LL<<bit);    // Current Window Value OR
                }
            }

            while(val >=k && i>=j){
                ans = min(ans, i-j+1);
                
                for(int bit = 0; bit<32; bit++){
                    if(nums[j] & (1LL<<bit)){
                        bitArray[bit]--;    // Reducing Minimum Window;
                    }
                }

                val = 0;
                for(int bit=0; bit < 32; bit++){
                    if(bitArray[bit]){
                        val += (1LL<<bit);    // Current Window Value OR
                    }
                }
                j++;
            }
            i++;
        }
        return ans==INT_MAX ? -1 : ans;
        
    }
};
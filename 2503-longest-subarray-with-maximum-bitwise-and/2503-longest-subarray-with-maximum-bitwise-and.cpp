class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxval = nums[0];
        int count = 0;
        int mc = 0;
        
        for(int i = 1; i < nums.size(); i++) {
            maxval = max(maxval, nums[i]);
        }
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == maxval) {
                count++;
                mc = max(mc, count);
            } else {
                count = 0;
            }
        }
        
        return mc;
    }
};

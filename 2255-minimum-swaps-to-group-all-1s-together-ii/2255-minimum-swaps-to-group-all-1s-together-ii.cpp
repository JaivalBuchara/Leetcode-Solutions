class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int totone = 0;
        for(auto& it : nums){
            if(it == 1) totone++;
        }
        nums.insert(nums.end(), nums.begin(), nums.end());
        int i = 0 , j = 0;
        int currone = 0 , maxcurr = 0;
        while(j < n * 2){
            if(nums[j] == 1) currone++;
            if(j - i + 1 > totone){
                if(nums[i] == 1) currone--;
                i++;
            }
            if(j - i + 1 == totone) {
                maxcurr = max(maxcurr, currone);
            }
            j++;
        }
        int swps = totone - maxcurr;
        return swps;
    }
};
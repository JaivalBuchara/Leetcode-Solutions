class Solution {
public:
    int solve(vector<int> &nums,int ind, vector<int> &dp){
        if(ind>=nums.size()){
            return 0;
        }
        if(dp[ind]!= -1){
            return dp[ind];
        }
        int rob_curr = nums[ind] + solve(nums,ind+2,dp);
        int skip_curr = solve(nums,ind+1,dp);
        return dp[ind] = max(rob_curr,skip_curr);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size(),-1);
        vector<int> num(nums.begin(),nums.end()-1);
        vector<int> dp2(nums.size(),-1);
        return max(solve(nums,1,dp),solve(num,0,dp2));

    }
};
class Solution {
public:
    int solve(vector<int>& nums,int ind,vector<int>& dp){
        if(ind >=nums.size()){
            return 0;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }
        int rob_curr = nums[ind] + solve(nums,ind+2,dp);
        int skip_curr =  solve(nums,ind+1,dp);
        return dp[ind] = max(skip_curr,rob_curr);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
};
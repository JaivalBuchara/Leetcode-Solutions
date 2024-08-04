class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        int m = 1000000007;
        int sum;
        for(int i = 0;i<n;i++){
            sum = 0;
            for(int j = i;j<n;j++){
                sum += nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        sum = 0;
        for(int i = left-1;i<right;i++){
            sum = (sum+ans[i])%m;
        }
        return sum%m;
    }
};
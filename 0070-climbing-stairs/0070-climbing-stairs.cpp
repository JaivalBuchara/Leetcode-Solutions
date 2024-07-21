class Solution {
public:
    int climbStairs(int n) {
        int p2 = 1;
        int prev=1;
        int ans;
        for(int i =2;i<=n;i++){
            ans = p2+prev;
            p2 = prev;
            prev = ans;
        }
        return prev;
    }
};
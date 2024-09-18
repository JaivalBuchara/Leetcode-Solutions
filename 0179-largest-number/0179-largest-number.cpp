class Solution {
public:
    static bool ab(int a, int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),ab);
        string ans;
        if(nums[0] == 0) return "0";
        for(auto it:nums) ans.append(to_string(it));
        return ans;    
    }
};
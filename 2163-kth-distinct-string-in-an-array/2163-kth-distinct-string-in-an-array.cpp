class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        int count = 0;
        string ans = "";
        for(auto it: arr){
            if(mp[it] == 1) count++;
            if(count == k){
                ans = it;
                break;
            }
        }
        return ans;
    }
};
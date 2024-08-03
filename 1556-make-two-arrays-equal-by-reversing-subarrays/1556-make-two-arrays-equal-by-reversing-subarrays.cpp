class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        for(auto it: target){
            if(mp.find(it)==mp.end() || mp[it] == 0) return false;
            mp[it]--;
        }
        return true;
    }
};
class Solution {
public:
    static bool comp(const pair<int,int> &a, const pair<int,int> &b){
        if(a.second==b.second) return a.first>b.first;
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for(auto it: nums)  mp[it]++;
        vector<pair<int,int>> vp;
        vector<int> ans;
        for(auto it : mp){
            vp.push_back({it.first,it.second});
        }
        sort(vp.begin(),vp.end(),comp);
        for(auto j : vp){
            for(int i = 0;i<j.second;i++)
                ans.push_back(j.first);
        }
        return ans;
    }
};
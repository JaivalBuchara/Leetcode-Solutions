class Solution {
public:
    static bool comp(const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> vp;
        for (int i = 0; i < names.size(); i++) {
            vp.push_back({names[i],heights[i]});
        }
        sort(vp.begin(), vp.end(), comp);
        vector<string> ans;
        for (auto i : vp) {
            ans.push_back(i.first);
        }
        return ans;
    }
};
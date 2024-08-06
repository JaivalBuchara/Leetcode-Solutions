class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if (n <= 8)
            return n;
        map<char, int> mp;
        for (auto i : word) {
            mp[i]++;
        }
        if (mp.size() <= 8) {
            int ans = 0;
            for (auto it : mp) {
                ans += it.second;
            }
            return ans;
        }
        vector<pair<char,int>> v;
        for(auto it: mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),[](const pair<char,int>& a,const pair<char,int>& b){
            return a.second>b.second;
        });
        int ans = 0;
        int round = 0;
        int inc = 1;
        for(auto it: v){
            if(round > 7) {
                round = 0;
                inc++;
            }
            ans= ans + (it.second*inc);
            round++;
        }
        return ans;
    }
};
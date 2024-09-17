class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        map<string,int> mp;
        stringstream a1(s1);
        string word;
        while(a1 >> word){
            mp[word]++;
        }
        stringstream a2(s2);
        while(a2 >> word){
            mp[word]++;
        }
        for(auto i1: mp){
            if(i1.second == 1) ans.push_back(i1.first);
        }
        return ans;
    }
};
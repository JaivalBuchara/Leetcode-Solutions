class Solution {
public:
    int minimumPushes(string word) {
        int i;
        int freq[26];
        vector<int> num;

        for(i = 0;i<26;i++) freq[i] = 0;
        for(i =0;i<word.size();i++) freq[word[i] -'a']++;
        for(i=0;i<26;i++) {
            if(freq[i]!=0) {
                num.push_back(freq[i]);
            }
        }
        sort(num.begin(),num.end(),greater<int>());
        int ans = 0;
        int round = 0;
        int inc = 1;
        for(auto it: num){
            if(round > 7) {
                round = 0;
                inc++;
            }
            ans+= (it*inc);
            round++;
        }
        return ans;
    }
};
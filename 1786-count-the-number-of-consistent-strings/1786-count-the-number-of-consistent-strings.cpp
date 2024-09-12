class Solution {
public:
    bool iscons(set<char> al, string word){
        for(auto it:word){
            if(al.find(it) == al.end())    return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> al(allowed.begin(),allowed.end());
        int count = 0;
        for(auto j: words){
            if(iscons(al,j)) count++;
        }
        return count;
    }
};
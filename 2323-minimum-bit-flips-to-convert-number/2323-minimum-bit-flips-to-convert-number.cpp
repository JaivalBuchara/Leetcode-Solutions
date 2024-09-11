#include <bits/stdc++.h> 
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int bases = 1,baseg = 1;
        if(start != 0 ) bases = static_cast<int> (log2(start));
        if(goal != 0) baseg = static_cast<int> (log2(goal));
        int count = 0;
        int f = max(baseg,bases);
        bitset<30> str(start);
        bitset<30> gl(goal);
        for(int i = 0;i<=f;i++){
            if(str[i] != gl[i]) count++;
        }
        return count;
    }
};
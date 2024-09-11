#include <bits/stdc++.h> 
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int differingBits = start ^ goal;
        
        int count = 0;
        while (differingBits) {
            count += differingBits & 1;  
            differingBits >>= 1;         
        }
        
        return count;
    }
};
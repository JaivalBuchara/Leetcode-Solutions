class Solution {
public:
    int findComplement(int num) {
        return num^(int)(pow(2,(int)log2(num)+1)-1);
        
    }
};
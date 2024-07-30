class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0;
        int b_c = 0;
        for(char i: s){
            if(i=='b'){
                b_c++;
            }
            else{
                ans = min(ans+1,b_c);
            }
        }
        return ans;
    }
};
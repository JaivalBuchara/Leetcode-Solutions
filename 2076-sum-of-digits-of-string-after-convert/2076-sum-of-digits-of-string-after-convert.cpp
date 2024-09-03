class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(auto it: s){
            int a = it-'a'+1;
            while(a>0){
                sum+=a%10;
                a=a/10;
            }
        }
        for(int i = 1;i<k;i++){
            int a = 0;
            while(sum>0){
                a+= sum%10;
                sum = sum/10;
            }
            sum = a;
        }
        return sum;
    }
};
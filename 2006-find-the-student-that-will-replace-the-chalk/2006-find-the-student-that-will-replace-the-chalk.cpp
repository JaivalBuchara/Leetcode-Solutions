class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum = 0;
        int i =0;
        for(auto i : chalk) sum+=i;
        k = k%sum;
        if(k == 0) return 0;
        while(k>=chalk[i]){
            k-=chalk[i];
            i++;
        }
        return i;
    }
};
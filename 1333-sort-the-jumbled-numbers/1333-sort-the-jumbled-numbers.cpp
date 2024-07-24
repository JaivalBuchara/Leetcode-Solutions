class Solution {
public:
    long long int mapnum(vector<int> mapping, long long int num){
        if(num == 0){
            return mapping[0];
        }
        long long int newnum = 0,i = 0;
        while(num>0){
            long long int temp =num%10; //last number ex 991 -> 1
            newnum += pow(10,i++)*mapping[temp];
            num/=10;
        }
        return newnum;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<long long int, int>> mapped;
        
        for (int i = 0; i < nums.size(); i++) {
            mapped.push_back({mapnum(mapping, nums[i]), nums[i]});
        }
        sort(mapped.begin(), mapped.end(), [](const pair<long long int, int>& a, const pair<long long int, int>& b) {
            return a.first < b.first;
        });
        vector<int> result;
        for (const auto& p : mapped) {
            result.push_back(p.second);
        }
        return result;
    }
};
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        for(int i = 0;i<rating.size();i++){
            for(int j =i;j<rating.size();j++){
                for(int k = j;k<rating.size();k++){
                    if(rating[i]>rating[j] && rating[j]>rating[k]) count++;
                    if(rating[i]<rating[j] && rating[j]<rating[k]) count++;
                }
            }
        }
        return count;
    }
};
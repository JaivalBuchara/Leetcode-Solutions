class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        vector<int> arrmin,arrmax;
        for(auto i : matrix){
            arrmin.emplace_back(*min_element(i.begin(),i.end()));
        }
        for(int i = 0;i<matrix[0].size();i++){
            int maxe = INT_MIN;
            for(int j=0; j<matrix.size();j++){
                maxe = max(maxe,matrix[j][i]);
            }
            arrmax.emplace_back(maxe);
        }
        for(int i = 0;i<arrmin.size();i++){
            if(find(arrmax.begin(),arrmax.end(),arrmin[i]) != arrmax.end())
                ans.emplace_back(arrmin[i]);
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> vp;
        if(m*n!=original.size()) return vp;
        int k =0;
        for(int i = 0;i<m;i++){
            vector<int> tmp;
            for(int j = 0;j<n;j++){
                tmp.push_back(original[k++]);
            }
            vp.push_back(tmp);
        }
        return vp;
    }
};
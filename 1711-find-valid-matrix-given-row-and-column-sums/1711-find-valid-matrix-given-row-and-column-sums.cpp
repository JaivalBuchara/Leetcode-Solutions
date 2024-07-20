class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int row = rowSum.size();
        int col = colSum.size();
        vector<vector<int>> ans(row,vector<int>(col,0));
        
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                int x = min(rowSum[i],colSum[j]);
                rowSum[i] -=x;
                colSum[j] -=x;
                ans[i][j] = x;
            }
        }
        return ans;
    }
};
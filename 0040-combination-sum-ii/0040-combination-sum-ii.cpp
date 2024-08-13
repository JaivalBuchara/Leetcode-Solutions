class Solution {
public:

    void solve(vector<vector<int>>& sol, vector<int>& candidates, vector<int>& temp, int target, int ind) {
        if (target == 0) {
            sol.push_back(temp);
            return;
        }
        
        for (int i = ind; i < candidates.size(); ++i) {
            if (i > ind && candidates[i] == candidates[i - 1]) continue;
            
            if (candidates[i] > target) break;
            
            temp.push_back(candidates[i]);
            solve(sol, candidates, temp, target - candidates[i], i + 1);
            temp.pop_back();  
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> sol;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());  
        solve(sol, candidates, temp, target, 0);
        return sol;
    }
};
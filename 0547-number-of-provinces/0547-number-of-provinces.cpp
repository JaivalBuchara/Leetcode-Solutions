class Solution {
public:
    void dfs(int node, vector<int>& vis, vector<vector<int>> isConnected) {
        vis[node] = 1;
        for (int i = 0; i<vis.size();i++) {
            if (isConnected[node][i] == 1 && !vis[i]) {
                dfs(i, vis, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();

        vector<int> vis(V, 0);
        int count = 0;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                count++;
                dfs(i, vis, isConnected);
            }
        }
        return count;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode* root, unordered_map<TreeNode*, int>& mp) {
        if (root == nullptr) return 0;

        if (mp.find(root) != mp.end()) {
            return mp[root];
        }

        int l = depth(root->left, mp);
        int r = depth(root->right, mp);

        mp[root] = max(l, r) + 1;

        return mp[root];
    }

    bool dfs(TreeNode* root, unordered_map<TreeNode*, int>& mp) {
        if (root == nullptr) return true;

        int leftDepth = depth(root->left, mp);
        int rightDepth = depth(root->right, mp);

        if (abs(leftDepth - rightDepth) > 1) return false;

        return dfs(root->left, mp) && dfs(root->right, mp);
    }

    bool isBalanced(TreeNode* root) {
        unordered_map<TreeNode*, int> mp;
        return dfs(root, mp);
    }
};
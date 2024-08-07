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
    int maxsum(TreeNode* root,int & msum){
        if(root == NULL) return 0;
        int l = max(0,maxsum(root->left,msum));
        int r = max(0,maxsum(root->right,msum));
        msum = max(msum,l+r+root->val);
        return max(l,r) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int msum = INT_MIN;
        maxsum(root,msum);
        return msum;
    }
};
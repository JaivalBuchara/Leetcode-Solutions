/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isMatch(ListNode* head, TreeNode* root) {
        if (head == nullptr) return true; 
        if (root == nullptr) return false; 
        if (root->val != head->val) return false; 
        return isMatch(head->next, root->left) || isMatch(head->next, root->right);
    }

    bool dfs(TreeNode* root, ListNode* head) {
        if (root == nullptr) return false;
        if (isMatch(head, root)) return true;

        return dfs(root->left, head) || dfs(root->right, head);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        return dfs(root, head);
    }
};

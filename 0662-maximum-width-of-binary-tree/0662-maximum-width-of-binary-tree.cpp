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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int maxwidth = 0;
        queue<pair<unsigned long long,TreeNode*>> q;
        q.push({0,root});
        while(!q.empty()){
            unsigned long long n = q.size();
            unsigned long long first = q.front().first;
            unsigned long long last = q.back().first;
            for(unsigned long long i = 0;i<n;i++){
                auto itr = q.front();
                unsigned long long idx = itr.first;
                TreeNode* temp = itr.second;
                q.pop();
                if(temp->left){
                    q.push({idx*2+1,temp->left});
                } 
                if(temp->right){
                    q.push({idx*2+2,temp->right});
                }
            }
            maxwidth = max(maxwidth,int(last-first)+1);
        }
        return maxwidth;
    }
};
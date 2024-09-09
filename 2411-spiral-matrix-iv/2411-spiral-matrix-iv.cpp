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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1)); 
        int top = 0, bottom = m - 1, left = 0, right = n - 1; 

        while (head != nullptr && top <= bottom && left <= right) {
            // Fill from left to right across the top row
            for (int i = left; i <= right && head != nullptr; i++) {
                ans[top][i] = head->val;
                head = head->next;
            }
            top++; // Move the top boundary down

            // Fill from top to bottom along the right column
            for (int i = top; i <= bottom && head != nullptr; i++) {
                ans[i][right] = head->val;
                head = head->next;
            }
            right--; // Move the right boundary left

            // Fill from right to left across the bottom row
            if (top <= bottom) { // Check if the row still exists
                for (int i = right; i >= left && head != nullptr; i--) {
                    ans[bottom][i] = head->val;
                    head = head->next;
                }
                bottom--; // Move the bottom boundary up
            }

            // Fill from bottom to top along the left column
            if (left <= right) { // Check if the column still exists
                for (int i = bottom; i >= top && head != nullptr; i--) {
                    ans[i][left] = head->val;
                    head = head->next;
                }
                left++; // Move the left boundary right
            }
        }

        return ans;
    }
};

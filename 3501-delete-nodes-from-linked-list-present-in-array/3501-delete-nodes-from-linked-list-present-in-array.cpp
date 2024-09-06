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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head == nullptr) return head;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        unordered_set<int> st(nums.begin(), nums.end());
        while(temp != NULL){
            if(st.find(temp->val) != st.end()){
                temp = temp->next;
                if(prev == nullptr) head = temp;
                else prev->next = temp;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};
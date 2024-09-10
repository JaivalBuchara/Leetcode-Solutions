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
    int gcd(int a,int b){
        if(b == 0) return a;
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        ListNode* nxt = head->next;
        
        while(nxt != nullptr){
            ListNode* tmp = new ListNode(gcd(curr->val,nxt->val));
            curr->next = tmp;
            tmp->next = nxt;
            curr = nxt;
            nxt = nxt->next;
        }
        return head;
    }
};
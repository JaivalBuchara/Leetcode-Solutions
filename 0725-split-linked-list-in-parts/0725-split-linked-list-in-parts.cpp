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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        int extra = size%k; // jitne bache unhe center se add karo 
        int each = size/k; // har node mei kitne aayenge
        cout<<extra<<endl<<each<<endl;
        if(each == 0){
            temp = head;
            for(int i = 0;i<k;i++){
                temp = (head)?head->next:nullptr;
                if(head) head->next = nullptr;
                ans.push_back(head);
                head = temp;
            }
        }else{
            for(int i = 0;i<k;i++){
                int t = each;
                ListNode* marker = nullptr;
                temp = head;
                for(int x = 1;x<t&&temp!=nullptr;x++){
                    temp = temp->next;
                }
                if(extra && temp!=nullptr){
                    temp = temp->next;
                    extra--;
                }
                if(temp){
                    marker = temp->next;
                    temp->next = nullptr;
                }
                ans.push_back(head);
                head = (marker)?marker:nullptr;
            }
        }
        return ans;
    }
};
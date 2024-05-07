class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        if(head->val >= 5){
            head = new ListNode(0, head);
        }

        ListNode* cur = head;
        while(cur != NULL){
            cur->val = (cur->val * 2) % 10;
            if(cur->next != NULL && cur->next->val >= 5){
                cur->val++;
            }
            cur = cur->next;
        }
        return head;
    }
};
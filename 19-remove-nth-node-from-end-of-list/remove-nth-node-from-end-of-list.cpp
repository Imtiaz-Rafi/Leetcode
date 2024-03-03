class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;     // [1,2,3,4,5]
        ListNode* second = head;    // [1,2,3,4,5]

        while(n--)
            first = first->next;    // [3,4,5]

        if(first==NULL)
            return head->next;
        
        while(first && first->next){
            first = first->next;        // [4,5] -------- [5]  
            second = second->next;      // [2,3,4,5] ----  [3,4,5]
        }

        second->next = second->next->next; // [3,4,5] -> [3,5] 
        return head;    // [1,2,3,5]
    }
};
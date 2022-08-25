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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* first = head, *second = head;
        while(second!=NULL && second->next!=NULL){
            // cout<<F->val<<" "<<S->val<<endl;
            first = first->next;
            second = second->next->next;
        }
        //reversing the list after from first half
        ListNode* prev = NULL;
        ListNode* cur = first;
        ListNode* next = first->next;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        
        while(head->next!=NULL && prev->next!=NULL){
            next = head->next;      // Storing second value of head;
            head->next = prev;      // pushing rev value after head0
            prev = prev->next;      // changing pointer or prev
            head = head->next;      // moving next head
            head->next = next;      // pushing second val of head
            head = head->next;      // head ke aro ek point baraisi
        }
    }
};
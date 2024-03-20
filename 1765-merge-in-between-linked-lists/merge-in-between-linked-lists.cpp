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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count = 0;
        ListNode* p = list1;
        while(count + 1 != a){
            p = p->next;
            count++;
        }

        ListNode* q = p;
        while(count != b + 1){
            q = q->next;
            count++;
        }

        p->next = list2;
        while(list2->next){
            list2 = list2->next;
        }
        list2->next = q;

        return list1;
    }
};
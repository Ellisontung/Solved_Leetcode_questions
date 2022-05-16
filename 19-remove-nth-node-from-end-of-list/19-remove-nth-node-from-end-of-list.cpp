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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *H = head;
        ListNode *T = head;
        ListNode *head_T = T;
        for(int i = 0 ; i < n ; i++){
            H = H->next;
        }
        if(H==NULL) return head->next;
        while(H->next != NULL){
            H = H->next;
            T = T->next;
        }
        T->next = T->next->next;
        return head_T;
    }
};
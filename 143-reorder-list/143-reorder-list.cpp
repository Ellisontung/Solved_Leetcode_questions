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
        ListNode *curr = head;
        vector<int> vt;
        int i = 0;
        while(curr!=NULL){
            vt.push_back(curr->val);
            curr = curr->next;
        }
        // curr = head;
        for(int j = 0 ; j < vt.size()/2+1 ; j++){
            if(head==NULL) break;
            head -> val = vt[j];
            head = head->next;
            if(head==NULL) break;
            head -> val = vt[vt.size()-j-1];
            head = head->next;
        }
        // head = curr;
    }
};
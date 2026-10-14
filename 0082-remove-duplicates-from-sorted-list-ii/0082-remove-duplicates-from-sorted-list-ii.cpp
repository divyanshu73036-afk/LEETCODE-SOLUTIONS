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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* p=dummy;

        while(p->next!=NULL && p->next->next!=NULL){
            if(p->next->val==p->next->next->val){
                int val=p->next->val;

                while(p->next!=NULL && p->next->val==val){
                    ListNode* t=p->next;
                    p->next=p->next->next;
                    delete t;
                }
            }
            else{
                p=p->next;
            }
        }

        head=dummy->next;
        delete dummy;
        return head;
    }
};

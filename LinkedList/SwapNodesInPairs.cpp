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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* t1=head;
        ListNode* t2=head->next;
        ListNode* p1=t1;
        t1->next=t2->next;
        t2->next=t1;
        head=t2;
        t1=t1->next;
        if(t1!=NULL) t2=t1->next;
        while(t1!=NULL && t2!=NULL)
        {
            t1->next=t2->next;
            t2->next=t1;
            p1->next=t2;
            p1=t1;
            if(t1!=NULL) t1=t1->next;
            if(t1!=NULL) t2=t1->next;
        }
        return head; 
    }
};
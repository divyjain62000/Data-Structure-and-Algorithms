//O(n)
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL && list2!=NULL) return list2;
        if(list1!=NULL && list2==NULL) return list1;
        ListNode *head;
        ListNode *i=list1;
        ListNode *j=list2;
        ListNode *k;
        if(list1->val<=list2->val)
        {
            head=list1;
            i=list1->next;
        }
        else
        {
            head=list2;
            j=list2->next;
        }
        
        k=head;
        while(i!=NULL && j!=NULL)
        {
            if(i->val<=j->val)
            {   
                k->next=i;
                i=i->next;
            }
            else
            {
                k->next=j;
                j=j->next;
            }
            k=k->next;
        }
        
        if(i!=NULL) k->next=i;
        if(j!=NULL) k->next=j;
         return head;
    }
};
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
        ListNode* t=head;
        ListNode* prev=t;
        int count=0;
        while(t!=NULL)
        {
            count++;
            prev=t;
            t=t->next;
        }
        if(count-n==0) {
            return head->next;
        }
        if(n==count) {
            prev->next=NULL;
            return head;
        }

        t=head;
        prev=head;
        int i=1;
        while(t!=NULL)
        {
            if(i==count-n+1)
            {
                prev->next=t->next;
                break;
            }
            prev=t;
            t=t->next;
            i++;
        }
    return head;
    }
};
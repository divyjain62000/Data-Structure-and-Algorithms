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
    int getCarry(int num)
    {
        int dc=0;
        int carry=0;
        while(num!=0)
        {
            dc++;
            carry=num%10;
            num=num/10;
        }
        return dc==2?carry:0;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
        {
            ListNode* node=new ListNode();
            return node;
        }
        if(l1!=NULL && l2==NULL) return l1;
        if(l1==NULL && l2!=NULL) return l2;
        int num=l1->val+l2->val;
        int carry=getCarry(num);
        l1=l1->next;
        l2=l2->next;
        ListNode* head;
        if(carry!=0) head=new ListNode(num%10);
        else head=new ListNode(num);
        ListNode* prev=head;
        while(l1!=NULL && l2!=NULL)
        {
            num=l1->val+l2->val+carry;
            carry=getCarry(num);
            ListNode* node;
            if(carry!=0) node=new ListNode(num%10);
            else node=new ListNode(num);
            prev->next=node;
            prev=node;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            num=l1->val+carry;
            carry=getCarry(num);
            ListNode* node;
            if(carry!=0) node=new ListNode(num%10);
            else node=new ListNode(num);
            prev->next=node;
            prev=node;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            num=l2->val+carry;
            carry=getCarry(num);
            ListNode* node;
            if(carry!=0) node=new ListNode(num%10);
            else node=new ListNode(num);
            prev->next=node;
            prev=node;
            l2=l2->next;
        }
        if(carry!=0) 
        {
            ListNode* node=new ListNode(carry);
            prev->next=node;
        }
        return head;
    }
};
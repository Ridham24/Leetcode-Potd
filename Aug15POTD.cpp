#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* l=new ListNode();
        ListNode* r=new ListNode();
        ListNode* l1=l;
        ListNode* r1=r;
        ListNode* h1=head;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                ListNode*  kk=new ListNode(head->val);
                l->next=kk;
                l=l->next;
            }
            else
            {
                ListNode*  kk=new ListNode(head->val);
                r->next=kk;
                r=r->next;
            }
            head=head->next;
        }
        l1=l1->next;
        r1=r1->next;
        l=l1;
        r=r1;
        if(l1==NULL)
        return r;
        while(l1->next!=NULL)
        {
            l1=l1->next;
        }
        l1->next=r;
        return l;
    }
};
int main(){

return 0;
}
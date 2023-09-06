#include<bits/stdc++.h>
using namespace std;
vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int l=0;
        ListNode* h=head;ListNode* i=head;
        while(h)
        {
            h=h->next;
            l++;
        }
        int x;
        int p=ceil(l/k);
        int j=l%k;
        x=p;
        vector<ListNode*> v;
        while(k)
        {
            k--;
            v.push_back(head);
            p=x;
            if(j)
            {
                j--;
                p++;
            }
            p--;
            while(p>0)
            {
                p--;
                if(head)
                head=head->next;
            }
            if(head)
            i=head->next;
            if(head)
            head->next=NULL;
            head=i;
        }
        return v;
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;
Node* copyRandomList(Node* head) {
        Node* h=head;
        if(h==NULL)
        return h;
        Node* n=new Node(head->val);
        Node* n1=n;
        h=h->next;
        while(h!=NULL)
        {
            n->next=new Node(h->val);
            n=n->next;
            h=h->next;
        }
        n=n1;
        Node* nex;
        h=head;
        while(h!=NULL)
        {
            nex=h->next;
            h->next=n;
            n=n->next;
            h->next->next=nex;
            h=nex;
        }
        h=head;
        n=n1;
        while(h!=NULL)
        {
            if(h->random==NULL)
             h->next->random=h->random;
            else
            h->next->random=h->random->next;
            h=h->next->next;
        }
        h=head;
        n=n1;
        while(h!=NULL&&n!=NULL)
        {
            h->next=n->next;
            h=h->next;
            if(h!=NULL)
            n->next=h->next;
            n=n->next;
        }
        return n1;
    }
int main(){

return 0;
}
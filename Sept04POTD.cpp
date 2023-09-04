#include<bits/stdc++.h>
using namespace std;
bool hasCycle(ListNode *head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f&&f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
            return true;
        }
        return false;
    }
int main(){

return 0;
}
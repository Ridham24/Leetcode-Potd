#include<bits/stdc++.h>
using namespace std;
queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int t=q1.front();
        q1.pop();
        while (!q2.empty()) 
        {
            q1.push(q2.front());
            q2.pop();
        }
        return t;

    }
    
    int top() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int t=q1.front();
        q1.pop();
        q2.push(t);
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return t;
        
    }
    
    bool empty() {
        return q1.empty();
    }

int main(){

return 0;
}
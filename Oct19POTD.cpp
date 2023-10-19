#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(int i=0;i<s.length();i++)
        {
                if(s[i]!='#')
                st1.push(s[i]);
                else
                {
                    if(st1.size()>0)
                    st1.pop();
                }
        }
        for(int i=0;i<t.length();i++)
        {
                if(t[i]!='#')
                st2.push(t[i]);
                else
                {
                    if(st2.size()>0)
                    st2.pop();
                }
        }
        if(st1.size()!=st2.size())
        return false;
        while(st1.size()!=0)
        {
            if(st1.top()!=st2.top())
            return false;
            st1.pop();
            st2.pop();
        }
        return true;
    }
int main(){

return 0;
}
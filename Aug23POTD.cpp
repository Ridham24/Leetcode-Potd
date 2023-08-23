#include<bits/stdc++.h>
using namespace std;
string reorganizeString(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        m[s[i]]++;
        priority_queue<pair<int,char>> p;
        for(auto it:m)
        p.push(make_pair(it.second,it.first));
        pair<int,char> q1,q2;
        string h="";
        while(p.size()>1)
        {
            q1=p.top();
            p.pop();
            q2=p.top();
            p.pop();
            h.push_back(q1.second);
            h.push_back(q2.second);
            q1.first=q1.first-1;
            q2.first=q2.first-1;
            if(q1.first)
            p.push(q1);
            if(q2.first)
            p.push(q2);
        }
        if(p.size()==1)
        {
            q1=p.top();
            if(q1.first>1)
            return "";
            h.push_back(q1.second);
        }
        return h;
    }
int main(){

return 0;
}
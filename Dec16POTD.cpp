#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])==m.end())
            return false;
            else
            m[t[i]]--;
        }
        for(auto x:m)
        {
            if(x.second!=0)
            return false;
        }
        return true;
    }
int main(){

return 0;
}
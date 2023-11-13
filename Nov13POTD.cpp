#include<bits/stdc++.h>
using namespace std;
string sortVowels(string s) {
        string check="aeiouAEIOU";
        string t="";
        string h="";
        for(int i=0;i<s.length();i++)
        {
            int f=0;
            for(int j=0;j<check.length();j++)
            {
                if(s[i]==check[j])
                    f=1;
            }
            if(f==0)
                t.push_back(s[i]);
            else
            {
                t.push_back('*');
                h.push_back(s[i]);
            }
        }
        sort(h.begin(),h.end());
        int x=0;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='*')
            {
                t[i]=h[x];
                x++;
            }
        }
        return t;
    }
int main()
{
    return 0;
}
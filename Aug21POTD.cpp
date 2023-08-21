#include<bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s) {
        string t;
        int i=0;
        while(i<s.length()/2)
        {
            t.push_back(s[i]);
            i++;
            if(s.length()%t.length()!=0)
            continue;
            int f=1;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]!=t[j%t.length()])
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            return true;
        }
        return false;
    }
int main()
{
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int minDeletions(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++)
        v[s[i]-'a']++;
        int x=-1;
        int c=0;
        vector<int> b;
        for(int i=0;i<26;i++)
        {
            if(v[i]!=0)
            b.push_back(v[i]);
        }
        sort(b.begin(),b.end());
        for(int i=b.size()-2;i>=0;i--)
        {
            if(b[i+1]==b[i])
            {
                c++;
                b[i]--;
            }
            else if(b[i]>b[i+1])
            {
                while(b[i]>=b[i+1]&&b[i]!=0)
                {
                    c++;
                    b[i]--;
                }
            }
        }
        return c;
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;
int minimumDeletions(string s) {
        vector<int> a(s.length(),0);
        vector<int> b(s.length(),0);
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            a[i]=1+c;
            else
            a[i]=c;
            c=a[i]; 
        }
        c=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='b')
            b[i]=1+c;
            else
            b[i]=c;
            c=b[i]; 
        }
        int mini=1e9;
        for(int i=0;i<s.length();i++)
        {
            int x=s.length()-a[i]-b[i];
            mini=min(mini,x);
        }
        return mini;
    }
int main(){

return 0;
}
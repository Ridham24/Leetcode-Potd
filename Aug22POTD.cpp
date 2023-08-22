#include<bits/stdc++.h>
using namespace std;
string convertToTitle(int n) {
        string s="";
        while(n>0)
        {
            int x=n%26;
            if(x==0)
            {
                s.push_back('Z');
                n--;
            }
            else
            s.push_back('A'+x-1);
            n=n/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
int main(){

return 0;
}
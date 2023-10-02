#include<bits/stdc++.h>
using namespace std;
bool winnerOfGame(string colors) {
        int a=0,b=0,t=0;
        char prev=' ';
        for(int i=0;i<colors.length();i++)
        {
            if(prev==' ')
            {
                t++;
                prev=colors[i];
            }
            else if(colors[i]==prev)
            t++;
            else
            {
                if(prev=='A')
                {
                    a+=max(t-2,0);
                }
                else
                {
                    b+=max(t-2,0);
                }
                prev=colors[i];
                t=1;
            }
        }
        if(prev=='A')
        {
            a+=max(t-2,0);
       }
        else
        {
            b+=max(t-2,0);
        }
        cout<<a<<b;
        if(b>=a)
        return false;
        return true;
    }
int main(){

return 0;
}
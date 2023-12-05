#include<bits/stdc++.h>
using namespace std;
int numberOfMatches(int n) {
        int c=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n/=2;
                c+=n;
            }
            else
            {
                c+=n/2;
                n/=2;
                n++;
            }
        }
       return c;
    }
int main(){

return 0;
}
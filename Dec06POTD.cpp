#include<bits/stdc++.h>
using namespace std;
int totalMoney(int n) {
        int c=0,x=n/7;
        c=x*28;
        int u=x-1;
        c+=u*(7+7+(u-1)*7)/2;
        x=1+x;
        int v=n%7;
        c+=(x+v-1)*(x+v)/2-(x-1)*(x)/2;
        return c;
    }
int main(){

return 0;
}
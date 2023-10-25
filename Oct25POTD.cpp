#include<bits/stdc++.h>
using namespace std;
int kthGrammar(int n, int k) {
        if(k==1)
        return 0;
        int m=pow(2,n-2);
        if(k<=m)
        return kthGrammar(n-1,k);
        return !kthGrammar(n-1,k-m);
    }
int main(){

return 0;
}
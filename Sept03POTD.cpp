#include<bits/stdc++.h>
using namespace std;
int uniquePaths(long long m, long long n) {
        m--;
        n--;
        double s=1,x=1;
        double a,b;
        if(m<n)
        {
            a=m;b=n;
        }
        else
        {
            a=n;b=m;
        }
        for(double i=m+n;i>b;i--,x++)
        s=s*i/x;
        while(x<=a)
        {s/=x;
        x++;}
        return s;
    }
int main()
{
    return 0;
}
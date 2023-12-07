#include<bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
        int i;
        for(i=num.length()-1;i>=0;i--)
        if(num[i]%2!=0)
        break;
        if(num[num.length()-1]%2!=0)
        return num;
        else if(i==-1)
        {
            return "";
        }
        else
        {
            num.erase(i+1,num.length()-i-1);
            return num;
        }
    }
int main()
{
    return 0;
}
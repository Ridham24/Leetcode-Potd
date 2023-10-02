#include<bits/stdc++.h>
using namespace std;
 string reverseWords(string s) {
        s.push_back(' ');
        string t="",f="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                reverse(t.begin(),t.end());
                f+=t;
                f.push_back(' ');
               t.clear(); 
            }
            else
            t.push_back(s[i]);
        }
        f.pop_back();
        return f;
    }
int main(){

return 0;
}
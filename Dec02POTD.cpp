#include<bits/stdc++.h>
using namespace std;
bool check(string s,unordered_map<char,int> m)
    {
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end()||m[s[i]]==0)
            return false;
            m[s[i]]--;
        }
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        int c=0;
        unordered_map<char,int> m;
        for(int i=0;i<chars.length();i++)
        m[chars[i]]++;
        for(int i=0;i<words.size();i++)
        {
            if(check(words[i],m))
            c+=words[i].length();
        }
        return c;
    }
int main()
{
    return 0;
}
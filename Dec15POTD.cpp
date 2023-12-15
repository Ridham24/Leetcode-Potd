#include<bits/stdc++.h>
using namespace std;
string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> m;
        unordered_set<string> s;
        for(int i=0;i<paths.size();i++)
        {
            m[paths[i][0]]=1;
            s.insert(paths[i][1]);
        }
        for(auto it:s)
        {
            if(m.find(it)==m.end())
            return it;
        }
        return "";
    }
int main()
{
    return 0;
}
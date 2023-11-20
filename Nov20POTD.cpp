#include<bits/stdc++.h>
using namespace std;
int garbageCollection(vector<string>& g, vector<int>& t) {
        int tp=0,tm=0,tg=0,l=0;
        for(int i=0;i<g.size();i++)
        {
            l+=g[i].size();
            for(int j=0;j<g[i].size();j++)
            {
                if(g[i][j]=='G')
                {
                    tg=max(tg,i);
                }
                else if(g[i][j]=='M')
                {
                    tm=max(tm,i);
                }
                else
                {
                    tp=max(tp,i);
                }
            }
        }
        int c=0;
        for(int i=0;i<t.size();i++)
        {
            t[i]+=c;
            c=t[i];
        }
        int ans=0;
        if(tp>0)
        ans+=t[tp-1];
        if(tm>0)
        ans+=t[tm-1];
        if(tg>0)
        ans+=t[tg-1];
        ans+=l;
        return ans;
    }
int main(){

return 0;
}
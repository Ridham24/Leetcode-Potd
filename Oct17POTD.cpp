#include<bits/stdc++.h>
using namespace std;
bool validateBinaryTreeNodes(int n, vector<int>& lc, vector<int>& rc) {
        vector<int> vis(n,0);
        queue<int> q;
        vector<int> in(n,0);
        for(int i=0;i<n;i++)
        {
            if(lc[i]==-1)
            continue;
            in[lc[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(rc[i]==-1)
            continue;
            in[rc[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            q.push(i);
        }
        if(q.size()!=1)
        return false;
        while(q.size()!=0)
        {
            int i=q.front();
            if(vis[i]==1)
            return false;
            vis[i]=1;
            int l=lc[i];
            int r=rc[i];
            cout<<l<<" "<<r<<endl;
            q.pop();
            if(l!=-1)
            {
                q.push(l);
            }
            if(r!=-1)
            {
                q.push(r);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]!=1)
            return false;
        }
        return true;
    }
int main(){

return 0;
}
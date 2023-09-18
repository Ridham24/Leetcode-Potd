#include<bits/stdc++.h>
using namespace std;
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int s=0;
        priority_queue<pair<int,int>> p;
       for(int i=0;i<mat.size();i++)
       {
           s=0;
           for(int j=0;j<mat[0].size();j++)
           {
               s+=mat[i][j];
           }
           p.push({s,i});
           if(p.size()>k)
           p.pop();
       }
        vector<int> v(k);
        for(int i=k-1;i>=0;i--)
        {
            v[i]=p.top().second;
            p.pop();
        }
        return v;
    }
int main(){

return 0;
}
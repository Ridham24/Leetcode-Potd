#include<bits/stdc++.h>
using namespace std;
int minimumTime(int n, vector<vector<int>>& r, vector<int>& time) {
        vector<int> indegree(n,0);
        vector<vector<int>> adj(n);
        for(int i=0;i<r.size();i++)
        {
            adj[r[i][0]-1].push_back(r[i][1]-1);
            indegree[r[i][1]-1]++;
        }
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            q.push({time[i],i});
        }
        int maxi=0;
        unordered_map<int,int> m;
        while(q.size()!=0)
        {
            int t=q.front().first;
            int i=q.front().second;
            q.pop();
            cout<<i<<" ";
            maxi=max(maxi,t);
            for(auto it:adj[i])
            {
                indegree[it]--;
                m[it]=max(m[it],t);
                if(indegree[it]==0)
                q.push({m[it]+time[it],it});
            }
        }
        return maxi;
    }
int main(){

return 0;
}
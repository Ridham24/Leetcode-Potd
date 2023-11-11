#include<bits/stdc++.h>
using namespace std;
class Graph {
public:
    vector<vector<int>> adj;
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n,vector<int> (n,1e9));
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]][edges[i][1]]=edges[i][2];
        }
        for(int i=0;i<n;i++)
        adj[i][i]=0;
        for(int i=0;i<adj.size();i++)
        {
            for(int j=0;j<adj.size();j++)
            {
                if(j==i)
                continue;
                for(int k=0;k<adj.size();k++)
                {
                    if(k==i)
                    continue;
                    adj[j][k]=min(adj[j][k],adj[j][i]+adj[i][k]);
                }
            }
        }
    }
    
    void addEdge(vector<int> edge) {
        if(adj[edge[0]][edge[1]]<=edge[2]) 
        return;
        adj[edge[0]][edge[1]]=edge[2];
        for(int i=0;i<adj.size();i++)
        {
            for(int j=0;j<adj.size();j++)
            {
                adj[i][j]=min(adj[i][j],adj[i][edge[0]]+adj[edge[1]][j]+edge[2]);
            }
        }
    }
    
    int shortestPath(int node1, int node2) {
        
        if(adj[node1][node2]!=1e9)
        return adj[node1][node2];
        return -1;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
int main()
{
    return 0;
}
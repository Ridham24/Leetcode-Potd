#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),0));
        vector<int> r(grid.size(),0);
        vector<int> c(grid[0].size(),0);
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                r[i]--;
                else
                r[i]++;
            }
        }
        for(int i=0;i<grid[0].size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0)
                c[i]--;
                else
                c[i]++;
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                ans[i][j]=r[i]+c[j];
            }
        }
        return ans;
    }
int main()
{
    return 0;
}
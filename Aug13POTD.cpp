#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int rec(int i,int j,int& a,int& b,vector<vector<int>>& dp,vector<vector<int>> &grid)
    {
        if(i==(a-1)&&j==(b-1))
        {
            if(grid[i][j]!=1)
            return 1;
            return 0;
        }
        int l=0,r=0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(i<(a-1)&&grid[i][j]!=1)
        l=rec(i+1,j,a,b,dp,grid);
        if(j<(b-1)&&grid[i][j]!=1)
        r=rec(i,j+1,a,b,dp,grid);
        return dp[i][j]=l+r;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int a=grid.size(),b=grid[0].size();
        vector<vector<int>> dp(a,vector<int>(b,-1));
        return rec(0,0,a,b,dp,grid);
    }
};
int main(){

return 0;
}
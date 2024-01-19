class Solution {
public:

    int mini(int i,int j,vector<vector<int>>&m,vector<vector<int>>&dp)
    {
        if(i>=m.size())
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int a=1e9;
        a=min(a,mini(i+1,j,m,dp)+m[i][j]);
        if(j!=0)
        a=min(a,mini(i+1,j-1,m,dp)+m[i][j]);
        if(j!=m[0].size()-1)
        a=min(a,mini(i+1,j+1,m,dp)+m[i][j]);
        return dp[i][j]=a;
    }

    int minFallingPathSum(vector<vector<int>>& m) {
        int mi=1e9;
        vector<vector<int>> dp(m.size()+1,vector<int>(m[0].size(),0));
        for(int i=m.size()-1;i>=0;i--)
        {
            for(int j=m[0].size()-1;j>=0;j--)
            {
                int a=1e9;
                a=min(a,dp[i+1][j]+m[i][j]);
                if(j!=0)
                a=min(a,dp[i+1][j-1]+m[i][j]);
                if(j!=m[0].size()-1)
                a=min(a,dp[i+1][j+1]+m[i][j]);
                dp[i][j]=a;
            }
        }
        for(int i=0;i<m[0].size();i++)
        mi=min(mi,dp[0][i]);
        return mi;
    }
};
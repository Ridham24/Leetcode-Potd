#define mod 1000000007
class Solution {
public:

    int count(int i,int target,int& n,int& k,vector<vector<int>>& dp)
    {
        if(target==0&&i==n)
        return 1;
        if(i>=n)
        return 0;
        if(target==0)
        return 0;
        if(dp[i][target]!=-1)
        return dp[i][target];
        int c=0;
        for(int j=1;j<k+1;j++)
        {
            if(target>=j)
            c=(c+count(i+1,target-j,n,k,dp))%mod;
            else
            break;
        }
        return dp[i][target]=c;
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return count(0,target,n,k,dp);
    }
};
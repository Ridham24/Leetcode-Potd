class Solution {
public:
    int count(int i,vector<int>& jd,int d,int mi,vector<vector<vector<int>>>& dp)
    {
        if(i>=jd.size())
        {
            if(d==1)
            return mi;
            return 1e9;
        }
        if(dp[i][d][mi]!=-1)
        return dp[i][d][mi];
        int a=1e9,b=1e9;
        a=count(i+1,jd,d,max(mi,jd[i]),dp);
        if(i!=0&&d!=1)
        b=count(i+1,jd,d-1,jd[i],dp)+mi;
        return dp[i][d][mi]=min(a,b);
    }

    int minDifficulty(vector<int>& jd, int d) {
        vector<vector<vector<int>>> dp(jd.size(),vector<vector<int>>(d+1,vector<int>(1001,-1)));
        int c= count(0,jd,d,0,dp);
        if(c==1e9)
        return -1;
        return c;
    }
};
int dp[101][27][101][101];
class Solution {
public:

    int count(int i,int p,int pc,string& s,int k)
    {
        if(k<0)
        return 1e9;
        if(i>=s.length()||(s.length()-i)<=k)
        return 0;
        if(dp[i][p][pc][k]!=-1)
        return dp[i][p][pc][k];
        int a=1e9,b=1e9;
        a=count(i+1,p,pc,s,k-1);
        if(s[i]-'a'==p)
        {
            b=count(i+1,p,pc+1,s,k);
            if(pc==1||pc==9||pc==99)
            b+=1;
        }
        else
        b=1+count(i+1,s[i]-'a',1,s,k);
        return dp[i][p][pc][k]=min(a,b);
    }

    int getLengthOfOptimalCompression(string s, int k) {
        memset(dp,-1,sizeof(dp));
        return count(0,26,0,s,k);
    }
};
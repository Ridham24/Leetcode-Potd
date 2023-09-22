#include<bits.stdc++.h>
using namespace std;
bool isSubsequence(string s1, string s2) {
        int n=s1.length(),m=s2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(s1[i]==s2[j])
                {
                    dp[i][j]=dp[i+1][j+1]+1;
                    continue;
                }
                int l=dp[i+1][j];
                int r=dp[i][j+1];
                dp[i][j]=max(l,r);
            }
        }
        if(s1.size()==dp[0][0])
        return true;
        return false;
    }
int main()
{
    return 0;
}
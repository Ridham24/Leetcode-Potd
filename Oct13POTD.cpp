#include<bits/stdc++.h>
using namespace std;
int pick(int i,vector<int>& cost,vector<int>& dp)
    {
        if(i>=cost.size())
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=min(pick(i+1,cost,dp)+cost[i],pick(i+2,cost,dp)+cost[i]);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(pick(0,cost,dp),pick(1,cost,dp));
    }
int main(){

return 0;
}
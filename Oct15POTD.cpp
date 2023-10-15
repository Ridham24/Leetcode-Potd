#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
    long long step(int i,int steps,int al,map<pair<int,int>,long long>& dp)
    {
        if(i<0||i>=al)
        return 0;
        if(steps==0&&i==0)
        return 1;
        if(steps==0)
        return 0;
        if(dp.find({i,steps})!=dp.end())
        return dp[{i,steps}];
        return dp[{i,steps}]=(step(i+1,steps-1,al,dp)%mod+step(i,steps-1,al,dp)%mod+step(i-1,steps-1,al,dp)%mod)%mod;
    }

    int numWays(int steps, int al) {
        map<pair<int,int>,long long> dp;
        return step(0,steps,al,dp);
    }
int main(){

return 0;
}
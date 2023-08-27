#include<bits/stdc++.h>
using namespace std;
bool cross(int neww,vector<int>& stones,int old,map<int,int>& m,map<pair<int,int>,int>& dp)
    {
        int h=-1;
        if(m.find(neww)==m.end())
        return false;
        h=m[neww];
        if(h==stones.size()-1)
        return true;
        if(dp.find(make_pair(neww,old))!=dp.end())
        {
            if(dp[{neww,old}]==0)
            return false;
            return true;
        }
        if(old!=1)
        {
            if(cross(neww+old-1,stones,old-1,m,dp))
        return true;
        }
        if(cross(neww+old,stones,old,m,dp))
        return true;
        if(cross(neww+old+1,stones,old+1,m,dp))
        return true;
        dp[{neww,old}]=0;
        return false;
    }
    bool canCross(vector<int>& stones) {
        if(stones.size()<=1)
        return true;
        if(stones.size()==2)
        {
            if(stones[1]-stones[0]<=1)
            return true;
        }
        if(stones[1]-stones[0]>1)
        return false;
        map<pair<int,int>,int> dp;
        map<int,int> m;
        for(int i=0;i<stones.size();i++)
        m[stones[i]]=i;
        return cross(stones[1],stones,1,m,dp);
    }
int main(){

return 0;
}
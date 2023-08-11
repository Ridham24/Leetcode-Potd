#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int rec(int index,int amount, vector<int>& coins,vector<vector<int>>& v)
    {
        if(amount==0)
        return 1;
        if(amount<0||index>=coins.size())
        return 0;
        if(v[index][amount]!=-1)
        return v[index][amount];
        int l=rec(index,amount-coins[index],coins,v);
        int r=rec(index+1,amount,coins,v);
        return v[index][amount]=l+r;
    }

    int change(int amount, vector<int>& coins) {
        vector<vector<int>> v(coins.size(),vector<int>(5001,-1));
        sort(coins.begin(),coins.end());
        return rec(0,amount,coins,v);
    }
};
int main(){

return 0;
}

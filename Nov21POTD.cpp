#include<bits/stdc++.h>
using namespace std;
int countNicePairs(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,long long> m;
        for(int i=0;i<nums.size();i++)
        {
            int x=0,t=nums[i];
            while(t>0)
            {
                x=x*10+t%10;
                t/=10;
            }
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++)
        {
            v[i]-=nums[i];
            m[v[i]]++;
        }
        long long c=0;
        for(auto it:m)
        {
            it.second-=1;
            c=(c+(it.second*(it.second+1)/2)%mod)%mod;
        }
        return c;
    }
int main(){

return 0;
}
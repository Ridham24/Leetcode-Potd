#include<its/stdc++.h>
using namespace std;
int minOperations(vector<int>& nums, int x) {
        vector<int> pre(nums.size()+1,0);
        vector<int> suf(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        pre[i+1]=pre[i]+nums[i];
        for(int i=nums.size()-1;i>=0;i--)
        suf[nums.size()-i]=suf[nums.size()-i-1]+nums[i];
        map<int,int> m;
        for(int i=0;i<nums.size()+1;i++)
        m[suf[i]]=i;
        int l=1e9;
        for(int i=0;i<nums.size()+1;i++)
        {
            if(m.find(x-pre[i])!=m.end())
            {
                if((i+m[x-pre[i]])>nums.size())
                continue;
                l=min(l,i+m[x-pre[i]]);
            }
        }
        if(l==1e9)
        return -1;
        return l;
    }
int main()
{
    return 0;
}
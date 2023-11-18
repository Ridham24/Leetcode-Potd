#include<bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int>& nums, int k) {
        vector<long long> pre(nums.size()+1,0);
        sort(nums.begin(),nums.end());
        long long c=0;
        for(int i=1;i<nums.size()+1;i++)
        {
            pre[i]=nums[i-1]+c;
            c=pre[i];
        }
        long long maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            while(i+1<nums.size()&&nums[i]==nums[i+1])
            i++;
            int s=0,e=i,m=s+(e-s)/2;
            int p=i;
            long long u=nums[p];
            while(s<=e)
            {
                long long sum=pre[p+1]-pre[m];
                if(u*(p-m+1)<=sum+k)
                {
                    maxi=max(maxi,(long long)(p-m+1));
                    e=m-1;
                }
                else
                s=m+1;
                m=s+(e-s)/2;
            }
        }
        return maxi;
    }
int main(){

return 0;
}
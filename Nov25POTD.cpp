#include<bits/stdc++.h>
using namespace std;
vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            v[0]+=nums[i]-nums[0];
        }
        for(int i=1;i<nums.size();i++)
        {
            v[i]=v[i-1]-(nums[i]-nums[i-1])*(nums.size()-2*i);
        }
        return v;
    }
int main()
{
    return 0;
}
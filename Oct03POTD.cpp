#include<bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end())+1;
        vector<int> a(n,0);
        for(int i=0;i<nums.size();i++)
        a[nums[i]]++;
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=a[i]*(a[i]-1)/2;
        }
        return c;
    }
int main(){

return 0;
}
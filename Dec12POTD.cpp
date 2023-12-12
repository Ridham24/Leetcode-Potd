#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
        int maxi1=0,maxi2=0,x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi1<nums[i])
            {
                maxi1=nums[i];
                x=i;
            }
        }
        nums[x]=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi2<nums[i])
            {
                maxi2=nums[i];
            }
        }
        return (maxi1-1)*(maxi2-1);
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;
int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,maxi=-1e9;
        while(i<j)
        {
            maxi=max(maxi,nums[i]+nums[j]);
            i++;
            j--;
        }
        return maxi;
    }
int main(){

return 0;
}
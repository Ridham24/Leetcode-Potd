#include<bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size())
        {
            if(nums[j]%2!=0)
            {
                j++;
                continue;
            }
            else
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
                continue;
            }
        }
        return nums;
    }
int main(){

return 0;
}
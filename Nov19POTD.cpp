#include<bits/stdc++.h>
using namespace std;
int reductionOperations(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end()),mi=*min_element(nums.begin(),nums.end());
        vector<int> v(m+1,0);
        for(int i=0;i<nums.size();i++)
        v[nums[i]]++;
        int c=0,x=1;
        for(int i=mi+1;i<=m;i++)
        {
            if(v[i]!=0)
            {
                c+=v[i]*x;
                x++;
            }
        }
        return c;
    }
int main(){

return 0;
}
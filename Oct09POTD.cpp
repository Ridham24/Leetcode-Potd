#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int x) {
        int a,b;
        a=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
        b=upper_bound(nums.begin(),nums.end(),x)-nums.begin()-1;
        if(a==nums.size()||nums[a]!=x||nums[b]!=x)
        {
            a=-1;
            b=-1;
        }
        return {a,b};
    }
int main(){

return 0;
}
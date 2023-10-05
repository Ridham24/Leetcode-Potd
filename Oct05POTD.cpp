#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int cand1=0,cand2=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cand1==nums[i])
            {
                c1++;
            }
            else if(cand2==nums[i])
            {
                c2++;
            }
            else if(c1==0)
            {
                cand1=nums[i];
                c1++;
            }
            else if(c2==0)
            {
                cand2=nums[i];
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==cand1)
            c1++;
            else if(nums[i]==cand2)
            c2++;
        }
        vector<int> v;
        if(c1>nums.size()/3)
        v.push_back(cand1);
        if(c2>nums.size()/3)
        v.push_back(cand2);
        return v;
    }
int main(){

return 0;
}

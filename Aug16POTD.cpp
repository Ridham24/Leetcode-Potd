#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;
    deque<int> q;
    for(int i=0;i<nums.size();i++)
    {
        if(q.empty())   
        q.push_back(i);
        else
        {
            if(q.front()<=i-k)  
            q.pop_front();
            while(!q.empty() && nums[i]>nums[q.back()])
            q.pop_back();
            q.push_back(i);
        }
        if(i>=k-1)
        {
            v.push_back(nums[q.front()]);
        }
    }
    return v;
    }
};
int main(){

return 0;
}
class Solution {
public:
    int rob(vector<int>& nums) {
       pair<int,int> p=make_pair(0,0);
       for(int i=0;i<nums.size();i++)
       {
           int a=p.first;
           int b=p.second;
           p.second=nums[i]+a;
           p.first=max(a,b);
       } 
       return max(p.first,p.second);
    }
};
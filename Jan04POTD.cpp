class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            int x=it.second;
            if(x==1)
                return -1;
            if((x%3)==1)
            {
                c+=x/3+1;
            }
            else
            {
                c+=x/3+(x%3)/2;
            }
        }
        return c;
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int s=0;
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            v[nums[i]-1]++;
        }
        int x;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>1)
            x=i+1;
        }
        s=nums.size()*(nums.size()+1)/2-s;
        cout<<s;
        v.clear();
        v.push_back(x);
        v.push_back(x+s);
        return v;
    }
};
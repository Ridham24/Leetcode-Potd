class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        int f=0;
        while(f==0)
        {
            f=1;
            vector<int> t;
            for(auto it:m)
            {
                if(it.second>0)
                t.push_back(it.first);
                m[it.first]--;
                if(m[it.first]>0)
                f=0;
            }
            v.push_back(t);
        }
        return v;
    }
};
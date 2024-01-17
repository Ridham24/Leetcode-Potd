class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> m;
        for(int i=0;i<arr.size();i++)
        m[arr[i]]++;
        int c=m.size();
        set<int> s;
        for(auto x:m)
        {
            s.insert(x.second);
        }
        if(c==s.size())
        return true;
        return false;
    }
};
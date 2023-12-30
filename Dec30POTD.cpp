class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> m;
        for(int i=0;i<words.size();i++)
        {
            for(auto it:words[i])
            m[it]++;
        }
        for(auto it:m)
        {
            if(it.second%words.size()!=0)
            return false;
        }
        return true;
    }
};
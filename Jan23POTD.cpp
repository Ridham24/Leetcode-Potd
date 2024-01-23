class Solution {
public:

    int count(int i,vector<int>f,vector<string>&a,map<pair<int,vector<int>>,int>& m)
    {
        if(i>=a.size())
        return 0;
        int x=count(i+1,f,a,m);
        for(int j=0;j<a[i].length();j++)
        {
            f[a[i][j]-'a']++;
            if(f[a[i][j]-'a']>1)
            return m[{i,f}]=x;
        }
        return m[{i,f}]=max(x,(int)(a[i].length()+count(i+1,f,a,m)));
    }

    int maxLength(vector<string>& arr) {
        vector<int> f(26,0);
        map<pair<int,vector<int>>,int> m;
        return count(0,f,arr,m);
    }
};
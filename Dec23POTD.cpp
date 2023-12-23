class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<string,int> m;
        int a=0,b=0;
        string h=to_string(a)+"_"+to_string(b);
        m[h]++;
        for(int i=0;i<path.length();i++)
        {
            if(path[i]=='N')
            b++;
            else if(path[i]=='S')
            b--;
            else if(path[i]=='E')
            a++;
            else
            a--;
            h=to_string(a)+"_"+to_string(b);
            m[h]++;
            if(m[h]>1)
            return true;
        }
        return false;
    }
};
class Solution {
public:
    int minCost(string c, vector<int>& nt) {
        int t=0,pre=1e9;
        char p='*';
        for(int i=0;i<c.length();i++)
        {
            if(c[i]==p)
            {
                if(nt[i]<pre)
                t+=nt[i];
                else
                {
                    t+=pre;
                    p=c[i];
                    pre=nt[i];
                }
            }
            else
            {
                pre=nt[i];
                p=c[i];
            }
        }
        return t;
    }
};
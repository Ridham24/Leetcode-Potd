class Solution {
public:
    int maxScore(string s) {
        vector<int> pre(s.length(),0);
        vector<int> suf(s.length(),0);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            pre[i]++;
            if(i!=0)
            pre[i]+=pre[i-1];
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='1')
            suf[i]++;
            if(i!=s.length()-1)
            suf[i]+=suf[i+1];
        }
        int maxi=0;
        for(int i=0;i<s.length()-1;i++)
        {
            maxi=max(maxi,pre[i]+suf[i+1]);
        }
        return maxi;
    }
};
class Solution {
public:
#define mod 1000000007
    int countHomogenous(string s) {
        vector<long long int > v;
        long long int c=1;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            c++;
            else
            {
                c=c%mod;
                v.push_back(c);
                c=1;
            }
        }
        v.push_back(c);
        c=1;
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum=(sum+(v[i]*(v[i]+1)/2)%mod)%mod;
        }
        return sum;
    }
};
#include<bits/stdc++.h>
using namespace std;
    class comparator
    {
        public:
        bool operator()(string& s1,string& s2)
        {
             return s1.length()<s2.length();
        }
    };

    int longestStrChain(vector<string>& words) {
        comparator cmp;
        int n=words.size();
        sort(words.begin(),words.end(),cmp);
        vector<int> dp(n,1);
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=0;
            for(int j=0;j<i;j++)
            {
                string a,b;
                a=words[i];
                b=words[j];
                int x1=0,x=0;
                for(x=0;x<a.length();x++)
                {
                    if(a[x]==b[x1])
                    {
                        x1++;
                    }
                }
                if(x1==b.length()&&(a.length()-b.length())==1)
                {
                    maxi=max(dp[j],maxi);
                }
            }
            dp[i]+=maxi;
        }
        maxi=0;
        for(int i=0;i<n;i++)
        maxi=max(maxi,dp[i]);
        return maxi;
    }
int main(){

return 0;
}
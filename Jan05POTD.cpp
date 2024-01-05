class Solution {
public:

    // int lis(int i,int p,vector<int>& v,int n,vector<vector<int>>& dp)
    // {
    //     if(i>=n)
    //     return 0;
    //     if(dp[i][p+1]!=-1)
    //     return dp[i][p+1];
    //     int l=0,r=0;
    //     if((p!=-1&&v[i]>v[p])||p==-1)
    //     l=lis(i+1,i,v,n,dp)+1;
    //     r=lis(i+1,p,v,n,dp);
    //     return dp[i][p+1]=max(l,r);
    // }

    int lengthOfLIS(vector<int>& a) {
        vector<int> v;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            int x=lower_bound(v.begin(),v.end(),a[i])-v.begin();
            if(x==v.size())
            v.push_back(a[i]);
            else
            v[x]=a[i];
        }
        return v.size();
    }
};
class Solution {
public:

    int count(int i,string& s,vector<int>& dp)
    {
        if(i>=s.length())
        return 1;
        if(s[i]=='0')
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int c=count(i+1,s,dp);
        if(i<s.length()-1&&stoi(s.substr(i,2))<=26)
        c+=count(i+2,s,dp);
        return dp[i]=c;
    }

    int numDecodings(string s) {
        vector<int> dp(s.length(),-1);
        return count(0,s,dp);;
    }
};
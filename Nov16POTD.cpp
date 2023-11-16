#include<bits/stdc++.h>
using namespace std;
string findDifferentBinaryString(vector<string>& nums) {
        int a=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int b=1;
            a=0;
            for(int j=nums[i].length()-1;j>=0;j--)
            {
                a+=b*(nums[i][j]-'0');
                b*=2;
            }
            m[a]=1;
        }
        int m1=0,m2=pow(2,nums[0].length());
        string s="";
        for(int i=0;i<nums[0].length();i++)
        s.push_back('0');
        for(;m1<m2;m1++)
        {
            if(m.find(m1)==m.end())
            {
                while(m1>0)
                {
                    a=log2(m1);
                    m1-=pow(2,a);
                    s[nums[0].length()-a-1]='1';
                }
                return s;
            }
        }
        return s;
    }
int main(){

return 0;
}
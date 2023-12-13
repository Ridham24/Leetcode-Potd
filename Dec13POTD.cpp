#include<bits/stdc++.h>
using namespace std;
int numSpecial(vector<vector<int>>& mat) {
        vector<int> r;
        vector<int> v;
        for(int i=0;i<mat.size();i++)
        {
            int c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                c++;
            }
            r.push_back(c);
        }
        for(int i=0;i<mat[0].size();i++)
        {
            int c=0;
            for(int j=0;j<mat.size();j++)
            {
                if(mat[j][i]==1)
                c++;
            }
            v.push_back(c);
        }
        int c=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    if(r[i]==1&&v[j]==1)
                    c++;
                }
            }
        }
        return c;
    }
int main()
{
    return 0;
}
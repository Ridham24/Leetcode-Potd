#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int n) {
        vector<vector<int>> v;
        vector<int> k;
        v.push_back({1});
        int s=0;
        int j=1;
        while(j<=n)
        {
            k.push_back(1);
            for(int i=1;i<j;i++)
            {
                s=v[j-1][i]+v[j-1][i-1];
                k.push_back(s);
            }
            k.push_back(1);
            v.push_back(k);
            k.clear();
            j++;
        }
        return v[n];
    }
int main(){

return 0;
}
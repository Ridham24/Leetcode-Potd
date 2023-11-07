#include<bits/stdc++.h>
using namespace std;
int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        map<int,int> m;
        for(int i=0;i<dist.size();i++)
        m[ceil(((double)(dist[i]))/speed[i])]++;
        int c=0,x=0;
        for(auto it:m)
        {
            while(it.second>0)
            {
                if(x<it.first)
                {
                    x++;
                    c++;
                    it.second-=1;
                }
                else
                goto l;
            }
        }
        l:
        return c;
    }
int main(){

return 0;
}
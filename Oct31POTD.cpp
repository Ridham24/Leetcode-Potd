#include<bits/stdc++.h>
using namespace std;
vector<int> findArray(vector<int>& pref) {
        vector<int> v;
        int c=pref[0];
        v.push_back(c);
        int x=0;
        for(int i=1;i<pref.size();i++)
        {
            int t=pref[i-1]^pref[i];
            v.push_back(t);
        }
        return v;
    }
int main(){

return 0;
}
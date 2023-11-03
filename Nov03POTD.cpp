#include<bits/stdc++.h>
using namespace std;
vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int x=1;
        for(int i=0;i<target.size();i++)
        {
            if(x==target[i])
            v.push_back("Push");
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
                i--;
            }
            x++;
        }
        return v;
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;
int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s=0,i=piles.size()-2;
        int c=piles.size()/3;
        while(c--)
        {
            s+=piles[i];
            i-=2;
        }
        return s;
    }
int main(){

return 0;
}
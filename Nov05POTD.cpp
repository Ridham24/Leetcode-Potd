#include<bits/stdc++.h>
using namespace std;
int getWinner(vector<int>& arr, int k) {
        if(arr.size()==1)
        return arr[0];
        if(k>=arr.size())
        return *max_element(arr.begin(),arr.end());
        int it=0,c=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[it]>arr[i])
            c++;
            else
            {
                it=i;
                c=1;
            }
            if(c==k)
            return arr[it];
        }
        return arr[it];
    }
int main(){

return 0;
}
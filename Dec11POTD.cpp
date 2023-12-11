#include<bits/stdc++.h>
using namespace std;
int findSpecialInteger(vector<int>& arr) {
        int c=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            c++;
            else
            {
                if(c>arr.size()/4)
                return arr[i-1];
                c=1;
            }
        }
        return arr[arr.size()-1];
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v;
        vector<int> b=nums;
        int f=0;
        for(int i=0;i<l.size();i++)
        {
            sort(b.begin()+l[i],b.begin()+r[i]+1);
            int c=b[l[i]+1]-b[l[i]];
            for(int j=l[i]+1;j<r[i];j++)
            {
                if(b[j+1]-b[j]!=c)
                {
                    v.push_back(false);
                    f=1;
                    break;
                }
            }
            if(f==0)
            v.push_back(true);
            f=0;
            b=nums;
        }
        return v;
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;
int findInMountainArray(int target, MountainArray &arr) {
        int s=0;
        int e=arr.length()-1;
        int m=s+(e-s)/2;
        while(s<e)
        {
            if(arr.get(m)<arr.get(m+1))
            s=m+1;
            else
            e=m;
            m=s+(e-s)/2;
        }
        int s1=0,e1=m,m1=(s1+e1)/2;
        int s2=m+1,e2=arr.length()-1,m2=(s2+e2)/2;
        if(target>=arr.get(s1)&&target<=arr.get(e1))
        {
            int x=-1;
            while(s1<=e1)
            {
                if(arr.get(m1)==target)
                {
                    x=m1;
                    e1=s1-1;
                }
                else if(target<arr.get(m1))
                e1=m1-1;
                else
                s1=m1+1;
                m1=(s1+e1)/2;
                cout<<m1;
            }
            if(x!=-1)
            return x;
        }
        if(target<=arr.get(s2)&&target>=arr.get(e2))
        {
            int x=-1;
            while(s2<=e2)
            {
                if(arr.get(m2)==target)
                {
                    x=m2;
                    e2=s2-1;
                }
                else if(target<arr.get(m2))
                s2=m2+1;
                else
                e2=m2-1;
                m2=(s2+e2)/2;
            }
            if(x!=-1)
            return x;
        }
        return -1;
    }
int main(){

return 0;
}
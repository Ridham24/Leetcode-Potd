#define mod 1000000007
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<long> ns(arr.size()),ps(arr.size());
        stack<int> s;
        ns[arr.size()-1]=arr.size();
        s.push(arr.size()-1);
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[s.top()]<arr[i])
            {
                ns[i]=s.top();
                s.push(i);
            }
            else
            {
                while(s.size()>0&&arr[s.top()]>=arr[i])
                {
                    s.pop();
                }
                ns[i] = s.empty() ? arr.size() : s.top();
                s.push(i);
            }
            cout<<ns[i]<<" ";
        }
        while(s.size()>0)
        s.pop();
        ps[0]=-1;
        s.push(0);
        for(int i=1;i<arr.size();i++)
        {
            if(arr[s.top()]<arr[i])
            {
                ps[i]=s.top();
                s.push(i);
            }
            else
            {
                while(s.size()>0&&arr[s.top()]>arr[i])
                {
                    s.pop();
                }
                ps[i] = s.empty() ? -1 : s.top();
                s.push(i);
            }
            cout<<ps[i]<<" ";
        }
        long ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans=(ans+arr[i]*(((i-ps[i])*(ns[i]-i)%mod)))%mod;
        }
        return ans;
    }
};
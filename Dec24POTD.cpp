class Solution {
public:
    int minOperations(string s) {
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                if(s[i]!='0')
                c1++;
            }
            else
            {
                if(s[i]!='1')
                c1++;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(i%2==1)
            {
                if(s[i]!='0')
                c2++;
            }
            else
            {
                if(s[i]!='1')
                c2++;
            }
        }
        return min(c1,c2);
    }
};
class Solution {
public:
    bool halvesAreAlike(string s) {
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                if(i>=s.length()/2)
                c++;
                else
                c--;
            }
        }
        if(c==0)
        return true;
        return false;
    }
};
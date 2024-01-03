int numberOfBeams(vector<string>& bank) {
        int c=0,prev=0;
        for(int i=0;i<bank.size();i++)
        {
            int x=0;
            for(int j=0;j<bank[0].size();j++)
            {
                x+=bank[i][j]-'0';
            }
            if(x==0)
            continue;
            if(prev==0)
            prev=x;
            else
            {
                c+=prev*x;
                prev=x;
            }
        }
        return c;
    }
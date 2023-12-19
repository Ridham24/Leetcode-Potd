class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<int> v={-1,0,1};
        vector<vector<int>> g(img.size(),vector<int>(img[0].size()));
        for(int i=0;i<img.size();i++)
        {
            for(int j=0;j<img[0].size();j++)
            {
                int x=1,s=img[i][j];
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(k==1&&l==1)
                        continue;
                        int a=i+v[k],b=j+v[l];
                        if(a<0||b<0||a>=img.size()||b>=img[0].size())
                        continue;
                        x++;
                        s+=img[a][b];
                    }
                }
                g[i][j]=s/x;
            }
        }
        return g;
    }
};
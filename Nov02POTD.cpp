#include<bits/stdc++.h>
using namespace std;
pair<int,int> post(TreeNode* root,int& c)
    {
        if(root==NULL)
        return {0,0};
        pair<int,int> p1=post(root->left,c);
        pair<int,int> p2=post(root->right,c);
        int x=p1.first+p2.first+root->val;
        int y=p1.second+p2.second+1;
        if(x/y==root->val)
        c++;
        return {x,y};
    }

    int averageOfSubtree(TreeNode* root) {
        int c=0;
        pair<int,int> h=post(root,c);
        return c;
    }
int main(){

return 0;
}
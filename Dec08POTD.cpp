#include<bits/stdc++.h>
using namespace std;
void in(TreeNode* root,string& s)
    {
        if(root==NULL)
        return;
        s+=to_string(root->val);
        int f=0;
        if(root->right!=NULL)
        f=1;
        if(f==1||root->left!=NULL)
        s.push_back('(');
        in(root->left,s);
        if(f==1||root->left!=NULL)
        s.push_back(')');
        if(f==1)
        s.push_back('(');
        in(root->right,s);
        if(f==1)
        s.push_back(')');
    }

    string tree2str(TreeNode* root) {
        string s;
        in(root,s);
        return s;
    }
int main(){

return 0;
}
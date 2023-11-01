#include<bits/stdc++.h>
using namespace std;
void inorder(TreeNode* root,vector<int>& v,int& f,int& mf,int& val)
    {
        if(root==NULL)
        return;
        inorder(root->left,v,f,mf,val);
        if(root->val==val)
            f++;
        else
        {
            val=root->val;
            f=1;
        }
        if(f>mf)
        {
            mf=f;
            v={val};
        }
        else if(f==mf)
        v.push_back(val);
        inorder(root->right,v,f,mf,val);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        int f=0,mf=0,val=-1;
        inorder(root,v,f,mf,val);
        return v;
    }
int main(){

return 0;
}
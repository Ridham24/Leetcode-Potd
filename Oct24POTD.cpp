#include<bits/stdc++.h>
using namespace std;
vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL)
        return {};
        q.push(root);
        q.push(NULL);
        vector<int> v;
        int maxx=INT_MIN;
        while(q.size()!=0)
        {
            TreeNode* t=q.front();
            q.pop();
            if(t==NULL)
            {
                v.push_back(maxx);
                maxx=INT_MIN;
                if(q.size()!=0)
                q.push(NULL);
            }
            else
            {
                maxx=max(maxx,t->val);
                if(t->left)
                q.push(t->left);
                if(t->right)
                q.push(t->right);
            }
        }
        return v;
    }
int main(){

return 0;
}
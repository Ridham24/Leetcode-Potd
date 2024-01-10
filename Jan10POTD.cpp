/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void mapping(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& mp)
    {
        if(root==NULL)
        return;
        if(root->left!=NULL)
        mp[root->left]=root;
        if(root->right!=NULL)
        mp[root->right]=root;
        mapping(root->left,mp);
        mapping(root->right,mp);
    }

    TreeNode* finding(TreeNode* root,int target)
    {
        if(root==NULL)
        return NULL;
        if(root->val==target)
        return root;
        TreeNode* a=finding(root->left,target);
        TreeNode* b=finding(root->right,target);
        if(a)
        return a;
        if(b)
        return b;
        return NULL;
    }

    int amountOfTime(TreeNode* root, int target) {
        unordered_map<TreeNode*,TreeNode*> mp;
        mp[root]=NULL;
        mapping(root,mp);
        TreeNode* start=root;
        start=finding(start,target);
        queue<pair<TreeNode*,int>> q;
        q.push({start,0});
        unordered_map<TreeNode*,int> m;
        m[start]=1;
        int timer=0;
        while(q.size()!=0)
        {
            TreeNode* t=q.front().first;
            int time=q.front().second;
            cout<<t->val<<" ";
            timer=max(time,timer);
            q.pop();
            if(t->left!=NULL&&m[t->left]!=1)
            {
                q.push({t->left,time+1});
                m[t->left]=1;
            }
            if(t->right!=NULL&&m[t->right]!=1)
            {
                q.push({t->right,time+1});
                m[t->right]=1;
            }
            if(mp[t]!=NULL&&m[mp[t]]!=1)
            {
                q.push({mp[t],time+1});
                m[mp[t]]=1;
            }
        }
        return timer;
    }
};
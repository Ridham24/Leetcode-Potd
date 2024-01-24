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

    void post(TreeNode* root,vector<int>&hash,int c,int&ans)
    {
        if(root==NULL)
        return;
        hash[root->val]++;
        if(hash[root->val]%2==1)
        c++;
        else
        c--;
        if(root->left==NULL&&root->right==NULL)
        {
            if(c<=1)
            ans++;
        }
        post(root->left,hash,c,ans);
        post(root->right,hash,c,ans);
        hash[root->val]--;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        int ans=0;
        vector<int>hash(10,0);
        post(root,hash,0,ans);
        return ans;
    }
};
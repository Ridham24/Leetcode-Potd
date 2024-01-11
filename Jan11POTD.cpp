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

    void check(TreeNode* root,int mini,int maxi,int& ans)
    {
        if(root==NULL)
        return;
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        ans=max(maxi-mini,ans);
        check(root->left,mini,maxi,ans);
        check(root->right,mini,maxi,ans);
    }

    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        check(root,1e9,-1e9,ans);
        return ans;
    }
};
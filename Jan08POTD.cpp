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

    void inorder(TreeNode* root,int l,int h,int& s)
    {
        if(root==NULL)
        return;
        inorder(root->left,l,h,s);
        if(root->val>=l&&root->val<=h)
        s+=root->val;
        inorder(root->right,l,h,s);
    }

    int rangeSumBST(TreeNode* root, int l, int h) {
        int s=0;
        inorder(root,l,h,s);
        return s;
    }
};
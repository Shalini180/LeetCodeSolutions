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
    bool isvalid(TreeNode* root,long l,long r){
        if(root==NULL)
            return true;
        if(root->val<=l || root->val>=r)
            return false;
        return isvalid(root->left,l,root->val) && isvalid(root->right,root->val,r);
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
            return true;
        bool p=isvalid(root,LONG_MIN,LONG_MAX);
        return p;
    }
};

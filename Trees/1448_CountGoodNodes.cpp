class Solution {
public:
    int count(TreeNode* root,int mx){
        if(root==NULL)
            return 0;
        int c=0;
        if(mx<=root->val)
            c++;
        mx=max(mx,root->val);
        return count(root->left,mx)+count(root->right,mx)+c;
    }
    int goodNodes(TreeNode* root) {
        int c=count(root,INT_MIN);
        return c;
    }
};

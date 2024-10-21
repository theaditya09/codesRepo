/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* LCA(TreeNode* root, TreeNode*p, TreeNode* q)
    {
        if(root == NULL || root==p || root ==q)
        {
            return root;
        }

        TreeNode* left = LCA(root->left,p,q);
        TreeNode* right = LCA(root->right,p,q);

        if(!left && !right) return NULL;
        else if(!left && right) return right;
        else if(left && !right) return left;
        else return root;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root,p,q);
    }
};
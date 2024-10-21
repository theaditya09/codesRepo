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
     
    void flat(TreeNode* root, TreeNode* &head, TreeNode* &tail)
    {
        if(root==NULL) return;

        TreeNode* left = root->left;
        TreeNode* right = root->right;

        root -> left = NULL;

        if(head==NULL)
        {
            head = root;
            tail = root;
        }
        else{
            tail -> left = NULL;
            tail -> right = root;
            tail = root;
        }
        
        flat(left,head,tail);
        flat(right,head,tail);
    }

    void flatten(TreeNode* root) {
        TreeNode* head = NULL;
        TreeNode* tail = NULL;
        flat(root,head,tail);
        root = head;
    }
};
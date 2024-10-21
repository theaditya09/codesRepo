/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

    void solve(ListNode* head, TreeNode* &root)
    {
        if(head == NULL) return;

        if(head -> next == NULL)
        {
            TreeNode* node = new TreeNode(head -> val);
            root = node;
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;

        while(fast != NULL)
        {
            fast = fast -> next;
            if(fast == NULL) break;
            fast = fast -> next;
            prev = slow;
            slow = slow -> next;
        }

        ListNode* head2 = slow -> next;
        prev -> next = NULL;

        TreeNode* node = new TreeNode(slow -> val);
        root = node;
        delete slow;

        solve(head,root->left);
        solve(head2, root->right);

    }

    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root = NULL;
        solve(head,root);

        return root;
    }
};
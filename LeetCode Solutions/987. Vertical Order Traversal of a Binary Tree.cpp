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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;

        map<int, map< int,vector<int> > > mpp;

        queue< pair<TreeNode*, pair<int,int>> > q;
        q.push({root,{0,0}});

        while(!q.empty())
        {
            auto temp = q.front();
            q.pop();

            TreeNode* front = temp.first;
            int level = temp.second.first;
            int hd = temp.second.second; 

            mpp[hd][level].push_back(front->val);
            
            if(front->left)
            {
                q.push({front->left,{level+1,hd-1}});
            }
            if(front->right)
            {
                q.push({front->right,{level+1,hd+1}});
            }
        }

        for (auto i : mpp) {

            vector<int> temp;
            for (auto j : i.second) {
                vector<int> values = j.second;
                sort(values.begin(), values.end());
                temp.insert(temp.end(), values.begin(), values.end());
            }
            ans.push_back(temp);
            
        }
        return ans;

    }
};
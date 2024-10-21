#include <bits/stdc++.h>
using namespace std; 

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

};

node* buildFromLevelOrder(node* root)
{
    // cout<<"Enter the root data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        //cout<<"Enter the left node data for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        //cout<<"Enter the right node data for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1)
        {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
    return root;
}

void levelOrderTraversel(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else{

            cout<<temp->data<<"  ";
            if(temp->left != NULL)
            {
                q.push(temp->left);
            }

            if(temp -> right != NULL)
            {
                
                q.push(temp -> right);
            }
        }
    }
}

vector<int> zigzagTraversal(node* root)
{
    vector<int> res;
    if(root == NULL)
    {
        return res;
    }

    queue<node*> q;
    q.push(root);
    bool LeftToRight = true;

    while(!q.empty())
    {
       int size = q.size();
       vector<int> ans(size);

        for(int i=0; i<size; i++)
        {
            node* temp = q.front();
            q.pop();

            int index = LeftToRight ? i : size - i - 1;
            ans[index] = temp -> data;

            if(temp -> left)
            {
                q.push(temp -> left);
            }

            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }

        LeftToRight = !LeftToRight;

        for(auto i : ans)
        {
            res.push_back(i);
        }

    }
    return res;
}

void leftTravese(node* root, vector<int>& res)
{
    if(root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    res.push_back(root -> data);

    if(root->left)
    {
        leftTravese(root->left, res);
    }
    else{
        leftTravese(root -> right, res);
    }
}

void rightTraverse(node* root, vector<int>& res)
{
    if(root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if(root -> right)
    {
        rightTraverse(root->right,res);
        res.push_back(root->data);
    }
    else{
        rightTraverse(root->left,res);
        res.push_back(root->data);
    }

}

void leafTraverse(node* root, vector<int>& res)
{
    if(root == NULL)
    {
        return;
    }

    if(root -> left == NULL && root-> right == NULL)
    {
        res.push_back(root->data);
        return;
    }

    leafTraverse(root->left, res);
    leafTraverse(root->right, res);
}

vector<int> boundaryTraversal(node* root)
{
    vector<int> res;
    if(root == NULL) return res;

    leftTravese(root,res);
    leafTraverse(root,res);
    rightTraverse(root->right,res);
    return res;
}

vector<int> verticalOrderTraversal(node* root)
{
     vector<int> ans;
        if(root == NULL) return ans;
        
        queue< pair<node*,int> > q;
        q.push({root,0});
        
        map<int, vector<int>> mpp; 
        
        while(!q.empty())
        {
           auto front = q.front();
           q.pop();
           
           node* node = front.first;
           int hd = front.second;
           
           mpp[hd].push_back(node -> data);
           
           if(node->left)
           {
               q.push({node->left, hd-1});
           }
           if(node->right)
           {
               q.push({node->right, hd+1});
           }
           
        }
        
        for(auto i : mpp)
        {
            for(int val : i.second)
            {
                ans.push_back(val);
            }
        }
        return ans;
}

int main() {

    node* root = NULL;
    root = buildFromLevelOrder(root);
    levelOrderTraversel(root);

    // vector<int> res = zigzagTraversal(root);
    // for(auto i : res)
    // {
    //     cout<<i<<" ";
    // }

    cout<<endl<<endl;
    // vector<int> ans = boundaryTraversal(root);
    vector<int> ans = verticalOrderTraversal(root);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

    

    return 0;
}
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

node* buildTree(node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter the data for left of "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter the data for right of "<<data<<endl;
    root -> right = buildTree(root -> right);
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
            cout<<temp->data<<" ";

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

void inOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

void preOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void postOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}

void noOfNodes(node* root, int* sum)
{
    if(root == NULL)
    {
        return;
    }

    noOfNodes(root->left, sum);
    noOfNodes(root->right, sum);
    *sum = *sum + 1;
}

node* noOfLeafNodes(node* root, int* sum)
{
    if(root == NULL)
    {
        return NULL;
    }

    node* left = noOfLeafNodes(root->left, sum);
    node* right = noOfLeafNodes(root->right, sum);

    if(left == NULL && right == NULL)
    {
        *sum = *sum + 1;
    }
    return root;
}

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

int main() {

    node* root = NULL;
    node* root2 = NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    /*
                1
            3       5 
          7  11   17
    */
    
    //root = buildTree(root);
    root2 = buildFromLevelOrder(root2);

    // levelOrderTraversel(root);
    levelOrderTraversel(root2);

    // cout<<"In order : ";
    // inOrder(root);
    // cout<<endl;
    // cout<<"Pre order : ";
    // preOrder(root);
    // cout<<endl;
    // cout<<"Post order : ";
    // postOrder(root);
    // cout<<endl;
    
    // int sum = 0;
    // noOfNodes(root,&sum);
    // cout<<"No of nodes : "<<sum<<endl;

    // sum = 0;
    // node* temp = noOfLeafNodes(root,&sum);
    // cout<<"No of leaf nodes : "<<sum<<endl;

    return 0;
}
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

node* buildFromLevelOrder(node* root, int n, int i)
{
    if(i==n)
    {
        return NULL;
    }

    root = new node(i);
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        int leftData = ++i;

        if(leftData < n)
        {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        int rightData = ++i;

        if(rightData < n)
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


int main() {

    int n = 5;
    node* node;
    node = buildFromLevelOrder(node, n, 0);
    levelOrderTraversel(node);
    cout<<endl<<endl;
    cout<<node->left->left->data<<" "<<node->left->right->data<<endl;
    
    return 0;
}
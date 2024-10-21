#include <iostream>
using namespace std; 

class Node{
    public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            next = NULL;
        }
};

void InsertAtTail(Node* &tail, int data)
{
    if(tail == NULL)
    {
        Node* toInsert = new Node(data);
        tail = toInsert;
    }

    Node* toInsert = new Node(data);
    tail -> next = toInsert;
    tail = toInsert;
}

void printLL(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void reverse(Node* &head, Node* &prev, Node* &curr)
{
    if(curr == NULL)
    {
        head = prev;
        return;
    }

    Node* forward = curr->next;

    reverse(head, curr,forward);
    curr -> next = prev;
    
}

int main() {

    Node* node1 = new Node(100);
    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,200);
    InsertAtTail(tail,300);
    InsertAtTail(tail,400);
    InsertAtTail(tail,500);

    printLL(head);

    
    Node* prev = NULL;
    Node* curr = head;

    reverse(head,prev,curr);

    printLL(head);
    
    return 0;
}
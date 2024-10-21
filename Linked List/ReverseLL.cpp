#include <iostream>
using namespace std; 

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertNodeTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void printLinkedList(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* getTail(Node* head)
{
    Node* tail;
    while(head -> next != NULL)
    {
        head = head -> next;
        tail = head;
    }
    return tail;
}

Node* reverseNode(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;

    while(curr -> next != NULL)
    {
        Node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }

    Node* newhead;
    curr -> next = prev;
    newhead = curr;
    return newhead;
}

int main() {

    Node* node1 = new Node(1);
    Node* head = node1; 
    Node* tail = node1;

    insertNodeTail(tail,2);
    insertNodeTail(tail,3);
    insertNodeTail(tail,4);
    insertNodeTail(tail,5);
    
    cout<<"Before Reverse : "<<endl;
    printLinkedList(head);

    cout<<"After Reverse : "<<endl;

    Node* newhead = reverseNode(head);
    printLinkedList(newhead);
    cout<<"New Head is : "<<newhead -> data<<endl;

    return 0;
}
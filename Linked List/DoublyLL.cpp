#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtHead(Node* &head, int data)
{
    Node* toInsert = new Node(data);
    toInsert -> next = head;
    head -> prev = toInsert;
    head = toInsert;
}

void insertAtTail(Node* &tail, int data)
{
    Node* toInsert = new Node(data);
    toInsert -> prev = tail;
    tail -> next = toInsert;
    tail = toInsert;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deletion(Node* &head, Node* &tail, int position)
{

    if(position==1)
    {
        head = head -> next;
        head -> prev = NULL;
        return;
    }

    Node* temp = head;
    for(int i=1; i<position; i++)
    {
        temp = temp -> next;
    }

    Node* prevNode = temp -> prev;
    Node* nextNode = temp -> next;

    if(temp -> next = NULL)
    {
        prevNode -> next = NULL;
        tail = prevNode;
        return;
    }

    nextNode -> prev = prevNode;
    prevNode -> next = nextNode;

}

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,400);
    insertAtTail(tail,7000);
    insertAtHead(head,8);
    insertAtHead(head,5);
    insertAtHead(head,2);

    print(head);

    deletion(head, tail, 1);

    print(head);

    cout<<"Head : "<<head -> data<<" Tail : "<<tail -> data<<endl;
    
    return 0;
}
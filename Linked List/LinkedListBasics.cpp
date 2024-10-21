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

 void insertNodeHead(Node* &head, int data)
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }

void insertNodeTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertInMiddle(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertNodeHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count<position-1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp->next == NULL)
    {
        insertNodeTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
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

void deletion(Node* &head, Node* &tail, int position)
{
    if(position == 1)
    {
        head = head -> next;
        return;
    }

    Node* temp = head;
    int count =1;

    while(count < position - 1)
    {
        temp = temp -> next;
        count++;
    }

    Node* todelete = temp -> next;

    if(todelete -> next == NULL)
    {
        temp -> next = NULL;
        tail = temp;
        return;
    }

    temp -> next = todelete -> next;
}

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;

    Node* node2 = new Node(100);
    Node* head2 = node2;
    Node* tail = node2;

    printLinkedList(head);
    printLinkedList(tail);


    insertNodeHead(head, 20);
    insertNodeHead(head, 30);
    insertNodeHead(head, 40);

    insertNodeTail(tail, 200);
    insertNodeTail(tail, 300);
    insertNodeTail(tail, 400);

    printLinkedList(head);
    printLinkedList(head2);

    cout<<"Say HI"<<endl;

    insertInMiddle(head2, tail, 5, 800);
    printLinkedList(head2);

    cout<<"Head : "<<head2 -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;

    cout<<endl<<endl<<"After Deletion : "<<endl;
    deletion(head2,tail, 5);
    printLinkedList(head2);
    cout<<"Head : "<<head2 -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;


    return 0;
}
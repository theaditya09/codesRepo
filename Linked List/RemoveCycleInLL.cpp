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

 Node *startingNode(Node *head) {
    if(head == NULL || head -> next == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        slow = slow -> next;
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
        }

        if(slow == fast)
        {
            slow = head;
            while(slow != fast)
            {
                slow = slow -> next;
                fast = fast -> next;
            }
            return slow;
        }
    }
    return NULL;
}

void insertNodeTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void removeLoop(Node* &head)
{
    Node* sNode = startingNode(head);
    Node* temp = sNode;

    while(temp -> next != sNode)
    {
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertNodeTail(tail,2);
    insertNodeTail(tail,3);
    insertNodeTail(tail,4);
    insertNodeTail(tail,5);
    insertNodeTail(tail,6);

    tail -> next = head -> next;

    Node* sNode = startingNode(head);
    cout<<"Starting node is : "<<sNode->data<<endl;

    removeLoop(head);
    printLinkedList(head);
}
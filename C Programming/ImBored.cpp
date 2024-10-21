#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employee
{
    char name[50];
    int age;
    int eid;
    char phno[10];
    char addr[50];
}emp;

emp input()
{
    emp det;
    printf("Enter the eid of employee : ");
    scanf("%d",&det.eid);
    printf("Enter the name of employee : ");
    getchar();
    fgets(det.name,50,stdin);
    printf("Enter the age of employee : ");
    scanf("%d",&det.age);
    printf("Enter the phone no of employee : ");
    getchar();
    fgets(det.phno,10,stdin);
    printf("Enter the address of employee : ");
    getchar();
    getchar();
    fgets(det.addr,50,stdin);
    return det;
}

void print(emp a)
{
    printf("\nEId : %d",a.eid);
    printf("\nName : %s",a.name);
    printf("\nAge : %d",a.age);
    printf("\nPhone No : %s",a.phno);
    printf("\nAddress : %s",a.addr);
}

void byEid(emp *arr, int n)
{
    int eid;
    printf("Enter the eid of employee : ");
    scanf("%d",&eid);

    for(int i=0; i<n; i++)
    {
        if(eid == arr[i].eid)
        {
            print(arr[i]);
            break;
        }
    }
}

void byAge(emp *arr, int n)
{
    int age;
    printf("Enter the age of employee : ");
    scanf("%d",&age);

    for(int i=0; i<n; i++)
    {
        if(age == arr[i].age)
        {
            print(arr[i]);
        }
    }
}

void byName(emp *arr, int n)
{
    char name[50];
    printf("Enter the name of employee : ");
    getchar();
    fgets(name,50,stdin);

    for(int i=0; i<n; i++)
    {
        if(strcmp(name,arr[i].name)==0)
        {
            print(arr[i]);
        }
    }
}

void maxAge(emp *arr, int n)
{
    int max = arr[0].age;
    emp a = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i].age > max)
        {
           max = arr[i].age;
           a = arr[i]; 
        }
    }

    print(a);    
}


int main()
{
    int n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);

    // emp arr[n];

    emp *arr = (emp*)malloc(n*sizeof(emp));

    for(int i=0; i<n; i++)
    {
        printf("Enter Employee %d details : \n", i+1);
        arr[i] = input();
    }

    int flag;
    printf("Do you want to check employee details? 0 for no 1 for yes");
    scanf("%d",&flag);

    if(flag == 1)
    {
        int sType;
        printf("Enter on what basis you wanna search? EmployeeId(0), Age(1) or Name(2) ");
        scanf("%d",&sType);
        switch(sType)
        {
            case 0 : byEid(arr,n);
                     break;
            case 1 : byAge(arr,n);
                     break;
            case 2 : byName(arr,n);
                     break;
            default : printf("Wrong Input");
                     break;
        }

    }

    printf("\nThe employee with maximux age is : ");
    maxAge(arr, n);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employee
{
    char name[50];
    int age;
    int eid;
    char phno[10];
    char addr[50];
}emp;

emp input()
{
    emp det;
    printf("Enter the eid of employee : ");
    scanf("%d",&det.eid);
    printf("Enter the name of employee : ");
    getchar();
    fgets(det.name,50,stdin);
    printf("Enter the age of employee : ");
    scanf("%d",&det.age);
    printf("Enter the phone no of employee : ");
    getchar();
    fgets(det.phno,10,stdin);
    printf("Enter the address of employee : ");
    getchar();
    getchar();
    fgets(det.addr,50,stdin);
    return det;
}

void print(emp a)
{
    printf("\nEId : %d",a.eid);
    printf("\nName : %s",a.name);
    printf("\nAge : %d",a.age);
    printf("\nPhone No : %s",a.phno);
    printf("\nAddress : %s",a.addr);
}

void byEid(emp *arr, int n)
{
    int eid;
    printf("Enter the eid of employee : ");
    scanf("%d",&eid);

    for(int i=0; i<n; i++)
    {
        if(eid == arr[i].eid)
        {
            print(arr[i]);
            break;
        }
    }
}

void byAge(emp *arr, int n)
{
    int age;
    printf("Enter the age of employee : ");
    scanf("%d",&age);

    for(int i=0; i<n; i++)
    {
        if(age == arr[i].age)
        {
            print(arr[i]);
        }
    }
}

void byName(emp *arr, int n)
{
    char name[50];
    printf("Enter the name of employee : ");
    getchar();
    fgets(name,50,stdin);

    for(int i=0; i<n; i++)
    {
        if(strcmp(name,arr[i].name)==0)
        {
            print(arr[i]);
        }
    }
}

void maxAge(emp *arr, int n)
{
    int max = arr[0].age;
    emp a = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i].age > max)
        {
           max = arr[i].age;
           a = arr[i]; 
        }
    }

    print(a);    
}


int main()
{
    int n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);

    // emp arr[n];

    emp *arr = (emp*)malloc(n*sizeof(emp));

    for(int i=0; i<n; i++)
    {
        printf("Enter Employee %d details : \n", i+1);
        arr[i] = input();
    }

    int flag;
    printf("Do you want to check employee details? 0 for no 1 for yes");
    scanf("%d",&flag);

    if(flag == 1)
    {
        int sType;
        printf("Enter on what basis you wanna search? EmployeeId(0), Age(1) or Name(2) ");
        scanf("%d",&sType);
        switch(sType)
        {
            case 0 : byEid(arr,n);
                     break;
            case 1 : byAge(arr,n);
                     break;
            case 2 : byName(arr,n);
                     break;
            default : printf("Wrong Input");
                     break;
        }

    }

    printf("\nThe employee with maximux age is : ");
    maxAge(arr, n);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employee
{
    char name[50];
    int age;
    int eid;
    char phno[10];
    char addr[50];
}emp;

emp input()
{
    emp det;
    printf("Enter the eid of employee : ");
    scanf("%d",&det.eid);
    printf("Enter the name of employee : ");
    getchar();
    fgets(det.name,50,stdin);
    printf("Enter the age of employee : ");
    scanf("%d",&det.age);
    printf("Enter the phone no of employee : ");
    getchar();
    fgets(det.phno,10,stdin);
    printf("Enter the address of employee : ");
    getchar();
    getchar();
    fgets(det.addr,50,stdin);
    return det;
}

void print(emp a)
{
    printf("\nEId : %d",a.eid);
    printf("\nName : %s",a.name);
    printf("\nAge : %d",a.age);
    printf("\nPhone No : %s",a.phno);
    printf("\nAddress : %s",a.addr);
}

void byEid(emp *arr, int n)
{
    int eid;
    printf("Enter the eid of employee : ");
    scanf("%d",&eid);

    for(int i=0; i<n; i++)
    {
        if(eid == arr[i].eid)
        {
            print(arr[i]);
            break;
        }
    }
}

void byAge(emp *arr, int n)
{
    int age;
    printf("Enter the age of employee : ");
    scanf("%d",&age);

    for(int i=0; i<n; i++)
    {
        if(age == arr[i].age)
        {
            print(arr[i]);
        }
    }
}

void byName(emp *arr, int n)
{
    char name[50];
    printf("Enter the name of employee : ");
    getchar();
    fgets(name,50,stdin);

    for(int i=0; i<n; i++)
    {
        if(strcmp(name,arr[i].name)==0)
        {
            print(arr[i]);
        }
    }
}

void maxAge(emp *arr, int n)
{
    int max = arr[0].age;
    emp a = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i].age > max)
        {
           max = arr[i].age;
           a = arr[i]; 
        }
    }

    print(a);    
}


int main()
{
    int n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);

    // emp arr[n];

    emp *arr = (emp*)malloc(n*sizeof(emp));

    for(int i=0; i<n; i++)
    {
        printf("Enter Employee %d details : \n", i+1);
        arr[i] = input();
    }

    int flag;
    printf("Do you want to check employee details? 0 for no 1 for yes");
    scanf("%d",&flag);

    if(flag == 1)
    {
        int sType;
        printf("Enter on what basis you wanna search? EmployeeId(0), Age(1) or Name(2) ");
        scanf("%d",&sType);
        switch(sType)
        {
            case 0 : byEid(arr,n);
                     break;
            case 1 : byAge(arr,n);
                     break;
            case 2 : byName(arr,n);
                     break;
            default : printf("Wrong Input");
                     break;
        }

    }

    printf("\nThe employee with maximux age is : ");
    maxAge(arr, n);
    
    return 0;
}
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

    int s,mainArrayIndex,len1,len2,index1,index2;
    int left[100], right[100], arr[100];

    Node* node1 = new Node(10);
    Node* head = node1;
    mainArrayIndex = s;

    int index1 = 0;
    int index2 = 0;

    while(index1<len1 && index2<len2)
    {
        if(left[index1] < right[index2])
        {
            arr[mainArrayIndex++] = left[index1++];
        }
        else{
            arr[mainArrayIndex++] = right[index2++];  
        }
    }

    while(index1 < len1)
    {
        arr[mainArrayIndex++] = left[index1++]; 
    }

    while(index2 < len2)
    {
        arr[mainArrayIndex++] = right[index2++];
    }

}

void mergeSort(int* arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    //merge array
    merge(arr,s,e);
}

int main() {
    
    int arr[7] = {4,6,3,1,46,75,34};
    int n=7;

    mergeSort(arr,0,n-1);

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

    return 0;
}
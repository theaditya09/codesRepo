#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct employee{

    char name[50];
    int age;
    int eid;
    char phno[15];
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
    fgets(det.phno,15,stdin);

    printf("Enter the address of employee : ");
    fgets(det.addr,50,stdin);

    printf("\n");

    return det;
}

void print(emp *a)
{
    printf("Name of employee is : %s",a->name);
    printf("Age of employee is : %d \n",a->age);
    printf("Eid of employee is : %d \n",a->eid);
    printf("Phone No of employee is : %s",a->phno);
    printf("Address of employee is : %s \n \n",a->addr);
    
}


int main()
{

    int n;
    printf("Enter no of employees : ");
    scanf("%d",&n);

    emp* arr = (emp*)malloc(n*sizeof(emp));

    for(int i=0; i<n; i++)
    {
        arr[i] = input();
    }

    for(int i=0; i<n; i++)
    {
        print(arr + i);
    }

    arr = realloc(arr,n+1);

    arr[n] = input();
    print(arr+n);

    return 0;
}
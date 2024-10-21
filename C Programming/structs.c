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

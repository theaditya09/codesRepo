#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char name[100];
    int roll;
    int marks[5];
}stud; 

stud getDetails()
{
    stud s1;

    printf("Enter name : ");
    scanf("%s",&s1.name);
    printf("Enter roll no : ");
    scanf("%d",&s1.roll);

    printf("Enter marks : ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &s1.marks[i]);
    }
    return s1;
}

void display(stud s1)
{
    printf("name : %s roll no : %d",s1.name,s1.roll);
    printf(" marks : ");
    for(int i=0; i<5; i++)
    {
        printf("%d ",s1.marks[i]);
    }
}

float avg(int arr[])
{
    float sum = 0;
    
    for(int i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }

    return sum/5.0; 
}


int main()
{
    int n;
    printf("Enter numeber of students : ");
    scanf("%d",&n);

    stud* person = (stud*)malloc(n*sizeof(stud));

    for(int i=0; i<n; i++)
    {
        person[i] = getDetails();
    }

    // for(int i=0; i<n; i++) 
    // {
    //     display(person[i]);
    // }

    
    float avgmarks[n];
    int order[n];

    for(int i=0; i<n; i++)
    {
        avgmarks[i] = avg(person[i].marks);
    }

    for(int i=0; i<n; i++)
    {
        printf("%.2f , ",avgmarks[i]); 
    }

    for(int i=0; i<n; i++)
    {
        float min = avgmarks[i];
        for(int j=i+1; j<n; j++)
        {
            if(avgmarks[j] > min)
            {
                min = avgmarks[j];

            }
        }
    }



    return 0;
}
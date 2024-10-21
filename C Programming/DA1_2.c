#include<stdio.h>

int main()
{
    //inputting first array
    int n1;
    printf("Enter the size of first array : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("\nEnter numbers of first array : ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    //inputting second array
    int n2;
    printf("Enter the size of second array : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("\nEnter numbers of second array : ");
    for(int i=0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int arr3[n1+n2];
    int count = 0;
    //copying first array in arr3
    for(int i=0; i<n1; i++)
    {
        arr3[count] = arr1[i];
        count++;
    }
    //copying second array in arr3
    for(int i=0; i<n2; i++)
    {
        arr3[count] = arr2[i];
        count++;
    }

    int flag = 1;
    while(flag!=0)
    {
        flag = 0;
        int i=0;
        while(i<n1+n2)
        {
            if(arr3[i] > arr3[i+1])
            {
                int temp = arr3[i];
                arr3[i] = arr3[i+1];
                arr3[i+1] = temp;
                flag++;
            }

            i++;
        }
    }

    printf("\nUpdated array is : ");
    for(int i=0; i<n1+n2; i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}
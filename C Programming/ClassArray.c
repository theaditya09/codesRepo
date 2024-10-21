#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the numbers of array : ");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max= arr[0];
    int min = arr[0];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("The max element is : %d",max);
    printf("\nThe min element is : %d",min);
    return 0;
}
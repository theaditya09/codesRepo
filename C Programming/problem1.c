#include<stdio.h>
int main()
{
    int num;
    int n;

    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter a number : ");  
    scanf("%d", &num);
    
    int arr[n];
    int temp = num;
    int firstDig=0, lastDig=0;
    int count=0;
    
    while(num!=0)
    {
        if(count==0)
        {
            lastDig = num%10;
        }
        else if(count==3)
        {
            firstDig = num%10;
        }
        num = num/10;
        count++;
    }

    
    printf("First Number is : %d \n",firstDig);
    printf("Last Digit is : %d \n",lastDig);
    printf("The sum is : %d \n",firstDig+lastDig);
    
    for(int i=n-1;i>=0; i--)
    {
        arr[i] = temp%10;
        temp = temp/10;
    }

    for(int i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }

}
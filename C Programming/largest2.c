#include<stdio.h>
int main()
{
    int max=0;
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        int temp = num%10;
        if(temp > max)
        {
            max = temp;
        }
        num = num/10;
    }
    printf("The max num is %d",max);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int dig;
    printf("Enter no of digits : ");
    scanf("%d",&dig);
    dig--;
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp = 0;
    int n2;
    int count = 0;
    while(n>0)
    {
       int m = n%10;
       // printf("%d  ",m);
        n = n/10;
        temp = temp + pow(10,dig)*m;
        dig--;
    }
    printf("Reverse is : %d",temp);
    return 0;
}
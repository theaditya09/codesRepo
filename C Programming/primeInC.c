#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int i,j;
    for(i=a; i<=b; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
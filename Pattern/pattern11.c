#include<stdio.h>
int main()
{
    int len;
    //printf("Enter the length : ");
    scanf("%d",&len);

    int bre;
    //printf("Enter the breadth : ");
    scanf("%d",&bre);

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<bre; j++)
        {
            if(i==0 || j==0|| i==(len-1) || j==(bre-1))
            {
              printf(" * ");  
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
    }
}
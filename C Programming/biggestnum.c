#include<stdio.h>
void main()
{
    int x,y,pass;
    printf("Enter number of easy challenges : " );
    scanf("%d",&x);
    printf("\nEnter number of hard challenges : ");
    scanf("%d", &y);
    printf("\nEnter minimum number of points needed to qualify : ");
    scanf("%d", &pass);

    if((x*1 + y*2) >= pass)
    {
        printf("Seema is qualified!");
    } 
    else{
        printf("Seema is not qulaified :( ");
    }
}
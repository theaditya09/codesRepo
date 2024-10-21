#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    // ------------------------------Q1----------------------------------------
    // int sum = 0;
    // for(int i=1; i<=n; i++)
    // {
    //     if(i%2!=0)
    //     {
    //     sum = sum + i;
    //     }
    // }
    // printf("%d", sum);

    // ----------------------------------Q2--------------------------------------------
    // float sum =0 ;
    // for(int i=1;i<=n; i++)
    // {
    //    sum = sum + (1/i) ; 
    // }
    // printf("%f",sum);

    //--------------------------------------Q3--------------------------------------------
    // for(int i=0; i<=n; i++)
    // {
    //     int sum = 0;
    //     int num = i;
    //     while(num>0)
    //     {
    //         int dig = num%10;
    //         num = num/10;
    //         sum = sum + dig*dig*dig;
    //     }
    //     if(sum == i)
    //     {
    //         printf("%d ",i);
    //     }
    // }



    //--------------------------------------Q4-------------------------------------------
    // int num = n;
    // int ans = 0;
    // while(num>0)
    // {
    //     int dig = num%10;
    //     num = num/10;
    //     ans = ans*10 + dig;
    // }
    // printf("%d",ans);

    //---------------------------------------Q5------------------------------------------
    
    // int num = n;
    // int ans = 0;
    // while(num>0)
    // {
    //     int dig = num%10;
    //     num = num/10;
    //     ans = ans*10 + dig;
    // }

    // if(ans==n)
    // {
    //     printf("Number is Palindrome");
    // }
    // else{
    //     printf("Number is not Palindrome");
    // }

    // -----------------------------Q6-----------------------------------------------------
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         printf("%d ", i*j);
    //     }
    //     printf("\n");
    // }

    //-------------------------------Q7-------------------------------------------------

    // 1
    // 22
    // 333
    // 4444
    // 55555

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");

    // *
    // # #
    // * * *
    // # # # #
    // * * * * *

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
            {
            printf("# ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2 != 0)
            {
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //    1
    //   2 2
    //  3 3 3
    // 4 4 4 4

    for(int i=1;i<=n; i++)
    {
        for(int k=n-i; k>=1; k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");

//    1
//   A B
//  2 3 4
// C D E F

    int count = 1;
    char alp = 'A';
    for(int i=1;i<=n; i++)
    {
        for(int k=n-i; k>=1; k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
           if(i%2==0)
           {
            printf("%c ",alp);
            alp++;
           }
           else{
            printf("%d ",count);
            count++;
           }
        }
        printf("\n");
    }
    printf("\n");

//  *  *  *  *
//  *        *
//  *        *
//  *  *  *  *

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j==1 || i==1 || i==n || j==n)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");

//  *  *  *  *
//  *  *  *
//  *  *
//  *
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
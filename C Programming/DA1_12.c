#include<stdio.h>

int SPECIAL_NUMBER(int num)
{
    int thirdDigit = num%10;
    num = num / 10;
    int secondDigit = num%10;
    num = num/10;
    int fistDigit = num;

    if(fistDigit + secondDigit == thirdDigit)
    {
        return 1;
    }
    else{
        return 0;
    }
} 

int main()
{
    int posint;
    printf("Enter the number : ");
    scanf("%d",&posint);

    int flag = SPECIAL_NUMBER(posint);

    if(flag==1)
    {
        printf("THIS IS A SPECIAL NUMBER");
    }
    else{
        printf("THIS IS NOT A SPECIAL NUMBER");
    }

    return 0;
}
#include<stdio.h>
void main()
{
    float num1,num2;
    char operator;
    printf("Enter the numbers and operation to be performed : ");
    scanf("%d %d %c",&num1, &num2, &operator);
    float ans = num1/num2;
    switch (operator)
    {
    case '+': printf("Additon is : %d", num1+num2);
        break;
    case '-': printf("Subtraction is : %d", num1-num2);
        break;
    case '*': printf("Multiplication is : %d", num1*num2);
        break;
    case '/':// float ans = num1/num2;
              printf("Divison is : %f", num1/num2 );
        break;
   
    default: printf("Invalid Operator");
        break;
    }
}
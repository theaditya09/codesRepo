#include<stdio.h>

float convertToMiles(int yards, int feets)
{
    float miles = (3*yards + feets) / 5280.0;
    return miles;
}

int main()
{
    int yards;
    int feets;
    printf("Enter no of yards : ");
    scanf("%d",&yards);
    printf("Enter no of feets : ");
    scanf("%d",&feets);

    float miles = convertToMiles(yards,feets);
    printf("Miles : %f",miles);
    return 0;
}
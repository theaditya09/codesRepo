#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter number of people : ");
    scanf("%d",&n);

    int weight[n];
    printf("Enter weight of people : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&weight[i]);
    }

    int *wp = weight;
    float sum = 0;
    for(int i =0; i<n; i++)
    {
        sum = sum + *(wp+i);
    }

    float mean = sum / n ;
    
    float diff=0;
    for(int i=0; i<n; ++i)
    {
        diff = diff + pow(*(wp+i) - mean,2);
    }

    float stddev = pow(diff / n, 0.5);

    printf("Weight Sum : %f",sum);
    printf("\nMean is : %f",mean);
    printf("\nStandard Deviation is : %f",stddev);
    
    return 0;
}
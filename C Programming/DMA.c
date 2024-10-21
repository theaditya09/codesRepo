#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr = (float*)malloc(9*sizeof(float));
    for(int j=0; j<9; j++)
    {
        scanf("%f",&ptr[j]);
    }
 
    float *ptr2 = (float*)realloc(ptr,11*sizeof(float));

    float temp = ptr2[8];
    
    for(int i=10; i>0; i--)
    {
        ptr2[i] = ptr2[i-1];
    }
    
    ptr2[0] = ptr2[1] + ptr[9];
    ptr2[10] = ptr2[1] * ptr[9];

    for(int i=0; i<11; i++)
    {
        printf("%.1f ",ptr2[i]);
    }

    free(ptr);
    return 0;
}
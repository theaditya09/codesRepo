#include<stdio.h>
int maxProfit(int* arr, int n) {
        int maxprof = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=(i+1); j<n; j++)
            {
                if(*(arr+j) - *(arr+i) > maxprof)
                {
                    maxprof = *(arr+j) - *(arr+i);
                }
            }
        }
        return maxprof;
    }

void main()
{
    
    int sz = 6;
    int arr[6] = {7,1,5,3,6,4};
    int ans = maxProfit(arr, sz);
    printf("%d ",&ans);
}
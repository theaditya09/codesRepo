#include <iostream>
using namespace std; 

void merge(int* arr, int s, int e)
{
    int mid = (s+e)/2; 
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int mainArrayIndex = s;

    //copying left side in first array
    for(int i=0; i<len1; i++)
    {
        left[i] = arr[mainArrayIndex++];
    }

    //copying right side in second array
    for(int i=0; i<len2; i++)
    {
        right[i] = arr[mainArrayIndex++];
    }


    //merging first and second 
    mainArrayIndex = s;

    int index1 = 0;
    int index2 = 0;

    while(index1<len1 && index2<len2)
    {
        if(left[index1] < right[index2])
        {
            arr[mainArrayIndex++] = left[index1++];
        }
        else{
            arr[mainArrayIndex++] = right[index2++];  
        }
    }

    while(index1 < len1)
    {
        arr[mainArrayIndex++] = left[index1++]; 
    }

    while(index2 < len2)
    {
        arr[mainArrayIndex++] = right[index2++];
    }

}

void mergeSort(int* arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;

    // sorting left side 
    mergeSort(arr,s,mid);

    // sorting right side
    mergeSort(arr,mid+1,e);

    //merge array
    merge(arr,s,e);
}

int main() {
    
    int arr[7] = {4,6,3,1,46,75,34};
    int n=7;

    mergeSort(arr,0,n-1);

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
#include <iostream>
using namespace std; 

int partition(int* arr, int s, int e)
{

    int pivot = arr[s];
    int count = 0;

    for(int i = s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    int index = s + count;

    swap(arr[s],arr[index]);

    int i=s, j=e;

    while(i<index && j>index)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }

        if(i<index && j>index)
        {
            swap(arr[i++],arr[j--]); 
        }
    }

    return index;

}

void quickSort(int* arr, int s, int e)
{
    //base case
    if (s>=e)
    {
        return;
    }

    //getting partition index
    int p = partition(arr, s, e);

    //sorting left part
    quickSort(arr, s, p-1);

    //sorting right part 
    quickSort(arr,p+1, e);
    
}

int main() {

    int arr[7] = {4,6,3,1,46,75,34};
    int arr2[7] = {8,7,6,5,4,3,2};
    int n=7;

    quickSort(arr,0,n-1);

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
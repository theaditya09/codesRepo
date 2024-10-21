#include <iostream>
using namespace std; 
void selectionSort(int arr[], int n)
{   
    int temp,index;
    for(int i=0; i<n; i++)
    {
        int min = arr[i];
        for(int j=(i+1); j<n; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                index=j;

            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main() {

    int array[6] = {4,9,5,0,1,3};
    selectionSort(array,6);
    
    return 0;
}
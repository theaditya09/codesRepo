#include <iostream>
using namespace std; 

void altswap(int arr[], int s)
{
    int count=0, i=0;
    while(count <= s/2)
    {
        if((i+1)<s)
        {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i = i+2;
        }
        count++;
    }

    cout<<"The reversed array is : ";
    for(int j=0; j<s; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[5] = {3,5,6,4,9};
    int brr[6] = {34,54,32,67,85,3};
    int crr[7] = {34,54,59,32,67,85,3};

    altswap(arr,5);
    altswap(brr,6);
    altswap(crr,7);

    return 0;
}
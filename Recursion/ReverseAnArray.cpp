#include <iostream>
using namespace std;

void reverseArray(int* arr, int l,int r)
{
    if(l>=r)
    {
        return;
    }

    swap(arr[l++],arr[r--]);
    reverseArray(arr,l,r);
}

int main() {

    int n = 5;
    int arr[n] = {1,2,3,4,5};
    reverseArray(arr,0,n-1);

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
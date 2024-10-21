#include <iostream>
using namespace std; 

int main() {

    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }   

        if(!swapped)
        {
            break;
        }
    }

    cout<<"The sorted array is : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
#include <iostream>
using namespace std; 

bool isSorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        return isSorted(arr+1, n-1);
    }
}

int main() {

    int n;
    int arr[100];
    cout<<"Enter n : "<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool ans = isSorted(arr,n);
    cout<<"Is Sorted? : "<<ans;
    
    return 0;
}
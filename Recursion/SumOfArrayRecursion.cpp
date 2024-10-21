#include <iostream>
using namespace std; 

int arraySum(int arr[], int n)
{   
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }

    int sum = arr[0] + arraySum(arr+1,n-1);
    return sum;
    
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

    cout<<"Sum of array is : "<<arraySum(arr,n);

    return 0;
}
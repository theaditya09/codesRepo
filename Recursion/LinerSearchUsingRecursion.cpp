#include <iostream>
using namespace std; 

bool LSearch(int arr[], int n, int key)
{
    if(n==1 && key==arr[0])
    {
        return true;
    }

    if(n==0)
    {
        return false;
    }

    return arr[0]==key || LSearch(arr+1, n-1, key);
}

int main() {

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to search : ";
    cin>>key;

    bool index = LSearch(arr,n,key);

    cout<<"element found or not : "<<index;
    
    return 0;
}
#include <iostream>
using namespace std; 

bool bSearch(int arr[], int s, int e, int key)
{
    if(s>e)
    {
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key)
    {
        return true;
    }

    if(arr[mid]>key)
    {
        return bSearch(arr,s,mid-1, key);
    }
    else{
        return bSearch(arr,mid+1, e, key);
    }
}

int main() {

    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int key = 99;
    cout<<"Found or not : "<<bSearch(arr,0,10,key);
    
    return 0;
}
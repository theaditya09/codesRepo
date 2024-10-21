#include <iostream>
using namespace std; 

int findSecondLargest(int n, int arr[])
{
    int largest = arr[0];
    
    for(int i=0; i<n; i++)
    {
        largest = max(largest,arr[i]);
    }

    int second_max = -1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > second_max && arr[i] < largest)
        {
            second_max = arr[i];
        }
    }

    return second_max;
}

int main() {

    int n = 6;
    int arr[n] = {5,4,2,3,1,2};
    int ans = findSecondLargest(n,arr);
    cout<<ans<<endl;
    return 0;
}
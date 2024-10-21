#include <iostream>
using namespace std; 

int main() {
    
    int n = 9;
    int arr[n][2];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }

    for(int i=0; i<n; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j][0] > arr[j+1][0]) 
            {
                int temp0 = arr[j][0];
                int temp1 = arr[j][1];

                arr[j][0] = arr[j+1][0];
                arr[j][1] = arr[j+1][1];

                arr[j+1][0] = temp0;
                arr[j+1][1] = temp1;

                swapped = true;
            }
            else if(arr[j][0] == arr[j+1][0])
            {
                if(arr[j][1] > arr[j+1][1])
                {
                    int temp0 = arr[j][0];
                    int temp1 = arr[j][1];

                    arr[j][0] = arr[j+1][0];
                    arr[j][1] = arr[j+1][1];

                    arr[j+1][0] = temp0;
                    arr[j+1][1] = temp1;

                    swapped = true;
                }
            }
        }
        if(!swapped)
        {
            break;
        }
    }

    cout<<"After sorting : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"("<<arr[i][0]<<","<<arr[i][1]<<")"<<endl;
    }

    return 0;
}
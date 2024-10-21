#include <iostream>
using namespace std; 

void rowSum(int arr[][4], int row, int col)
{
    int max = -1;
    for(int row=0; row<4; row++)
    {
        int sum = 0;
        for(int col=0; col<4; col++)
        {
            sum = sum + arr[row][col];
        }
        if(sum>max)
        {
            max = sum;
        }
        cout<<"Sum of Row "<<row<<" is "<<sum<<endl;
    }
    cout<<"Row Max is : "<<max;
}

void colSum(int arr[][4], int row, int col)
{
    int max = -1;
    for(int col=0; col<4; col++)
    {
        int sum = 0;
        for(int row=0; row<4; row++)
        {
            sum = sum + arr[row][col];
        }
        if(sum>max)
        {
            max = sum;
        }
        cout<<"Sum of Col "<<col<<" is "<<sum<<endl;
    }
    cout<<"Col Max is : "<<max;
}

int main() {
    
    int arr[4][4];

    for(int row=0; row<4; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }
    rowSum(arr,4,4);
    cout<<endl;
    colSum(arr,4,4);
    return 0;
}
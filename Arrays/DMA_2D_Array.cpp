#include <iostream>
using namespace std; 
 
int main() {
    
    // int n;
    // cin>>n;

    int row,col;
    cin>>row>>col;
    int** arr = new int*[row];

    for(int i=0; i<row;i++)
    {
        arr[i] = new int[col];
    }

    cout<<"Enter elements : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Elements are : "<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

    return 0;
}
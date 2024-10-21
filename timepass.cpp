#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--)
	{
	    int row;
	    cin>>row;
	    int col;
	    cin>>col;
	    
	    int arr[row][col];
	    
	    int mini = min(row,col);
	    
	    for(int i=0; i<row; i++)
	    {
	        for(int j=0; j<col; j++)
	        {
	            if( i%mini == j%mini )
	            {
	                arr[i][j] = 3;
	            }
	            else{
	                arr[i][j] = 2;
	            }
	        }
	    }
	    
	    for(int i=0; i<row; i++)
	    {
	        for(int j=0; j<col; j++)
	        {
	            cout<<arr[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    
	}

}

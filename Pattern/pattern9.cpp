#include <iostream>
using namespace std; 

int main() {
    int n = 5;
    //cin>>n;
    for(int i=1; i<=n; i++)
    {
        int temp = (n-i+1);
        for(int j=1; j<=temp; j++)
        {
            cout<<j<<" ";
        }
        int temp1 = i-1;
        for(int j=1; j<=temp1; j++)
        {
            cout<<"* * ";
        }
        // for(int j=1; j<=temp1; j++)
        // {
        //     cout<<"*";
        // }
        int temp2 = n-i+1;
        int temp3 = n - i + 1;

        for(int k=1; k<=temp3; k++)
        {
            cout<<temp2<<" ";
            temp2 = temp2 - 1;
        }

        cout<<endl;
    }
    return 0;
}
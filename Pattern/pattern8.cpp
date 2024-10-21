#include <iostream>
using namespace std; 

int main() {
    int n=5;
    // cin>>n;
    for(int i = 1; i<=n; i++) 
    {
        int j = 1;
        while(j<=(n-i))
        {
            cout<<"  ";
            j = j+1; 
        }
        for(int k=1; k<=i; k++)
        {
            cout<<k<<" ";
        }
        int l=1;
        int temp = i-1;
        while(l<=(i-1))
        {
            
            cout<<temp<<" ";
            temp--;
            l = l+1;
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std; 

int main() {
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int x[n] = {};
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<" index of array : "<<endl;
        cin>>x[i];
    }
    for(int i= 0; i<5; i++)
    {
        cout<<x[i]<<endl;
    }    
    return 0;
}
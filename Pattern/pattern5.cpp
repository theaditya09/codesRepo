#include <iostream>
using namespace std; 

int main() {
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        char ch = 'A' + i - 1;;
        for(int j=1; j<=i;j++)
        {
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
        
    }
    return 0;
}
#include <iostream>
using namespace std; 

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int val = i;
        for(int j = 1; j<=n; j++)
        {
            switch (val)
            {
                case  1: cout<<"A"<<" ";
                            break;
                case  2: cout<<"B"<<" ";
                            break;
                case  3: cout<<"C"<<" ";
                            break;
                case  4: cout<<"D"<<" ";
                            break;
                case  5: cout<<"E"<<" ";
                            break;
            }
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n1=10, n2=50, i, j;
    for(i=n1; i<=n2; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
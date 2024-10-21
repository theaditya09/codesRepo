#include <iostream>
#include<math.h>
using namespace std; 
int complement(int n)
{
    int a;
    if(n==1)
    {
       a=0;
    }
    if(n==0)
    {
        a=1;
    }
    return a;
}

int main() {
    int n;
    cin>>n;
    int bit;
    int cmp=0;
    int count=0;

    if(n==0)
    {
        return 1;
    }

    while(n!=0)
    {
        bit = n&1;
        cmp = cmp + (complement(bit) * pow(2,count));
        count++;
        n = n>>1;
    }
    cout<<cmp;
    return 0;
}
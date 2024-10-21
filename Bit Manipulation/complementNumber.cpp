#include <iostream>
#include<math.h>
using namespace std;

int complement(int n)
{
    int sum=0;
    for(int i=0; i<32; i++)
    {
        sum = sum + pow(2,i);
    }
    n = n ^ sum;
    return n;
}

int main() {
    int n;
    cin>>n;
    complement(n);

    return 0;
}
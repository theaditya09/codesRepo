#include<iostream>
using namespace std;

void fact(int n){
    int product=1;
    for(int i=2; i<=n; i++)
    {
        product = product * i;
    }
    cout<<product<<endl;
}

int main()
{
    fact(3);
    return 0;
}
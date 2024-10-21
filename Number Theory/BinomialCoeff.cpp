#include<iostream>
using namespace std;

int fact(int n){
    int product=1;
    for(int i=2; i<=n; i++)
    {
        product = product * i;
    }
    return product;
}
int bcoeff(int n, int r){
    int nf = fact(n);
    int rf = fact(r);
    int nrf = fact(n-r);
    int pdt = rf * nrf;
    int fin = nf / pdt;
    return fin;
}

int main()
{
    int ans = bcoeff(5,2);
    cout<<ans;
    return 0;
}
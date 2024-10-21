#include <iostream>
using namespace std; 

int power(int num, int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return num * power(num, n-1);
    }
}

int main() {
    cout<<power(2,10)<<endl;
    cout<<power(4,3)<<endl;
    cout<<power(3,2)<<endl;
    cout<<power(3,3)<<endl;
    return 0;
}
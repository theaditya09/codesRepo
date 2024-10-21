#include <iostream>
using namespace std; 

//functional recursion
int sum(int n)
{
    if(n<=1)
    {
        return 1;
    }

    return n + sum(n-1);
}

//parameterised recursiom
int sum1(int i, int sum)
{
    if(i<1)
    {
        return sum;
    }

    return sum1(i-1,sum+i);

}

int main() {

    cout<<sum(100)<<endl;
    cout<<sum1(100,0);
    
    return 0;
}
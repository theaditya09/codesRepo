#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, cube=0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int n=num;
    while(n>0)
    {
        int digit = n%10;
        int cubed = digit * digit * digit;
        cube = cube + cubed;
        n = n/10;
    }
    if (cube == num)
    {
        cout<<"Its an amstrong number";
    }
    else{
        cout<<"Its not an amstrong number";
    }
    return 0;
}

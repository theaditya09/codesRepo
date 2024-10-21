#include <iostream>
using namespace std; 

void printnum(int count, int n)
{
    if(count<1)
    {
        return;
    }

    printnum(count-1, n);
    cout<<count<<" ";
}

int main() {
    
    printnum(10,10);

    return 0;
}
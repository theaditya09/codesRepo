#include <iostream>
using namespace std; 

void printnum(int count, int n)
{
    if(count>n)
    {
        return;
    }

    printnum(count+1, n);
    cout<<count<<" ";
}

int main() {
    
    printnum(1,10);

    return 0;
}
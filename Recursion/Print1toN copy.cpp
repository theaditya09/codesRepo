#include <iostream>
using namespace std; 

void Print(int num, int count)
{
    if(count == num+1)
    {
        return;
    }

    cout<<count<<" ";
    Print(num, ++count);
}

int main() {
    Print(15,1);
    return 0;
}
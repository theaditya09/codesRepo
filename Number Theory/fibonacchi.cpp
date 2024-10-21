#include <iostream>
using namespace std;
int main()
{
    int t1=0, t2=1;
    int n=10;
    int l1 = t1, l2 = t2;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1; i<=n; i++)
    {  
        int next = l1 + l2;
        cout<<next<<" ";
        l1 = l2;
        l2 = next;
    }
    return 0;
}

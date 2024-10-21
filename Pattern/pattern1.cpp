#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int* ptra, int* ptrb)
{
    int temp = *ptra;
    *ptra = *ptra + *ptrb;
    
    if(temp>*ptrb)
    {
        *ptrb = temp - *ptrb;
    }
    else if(*ptrb > temp)
    {
        *ptrb = *ptrb - temp;
    }
}


int main() {
   int a,b;
   cin>>a>>b;
   int* pa = &a;
   int* pb = &b; 
   
   update(pa,pb);
   cout<<a<<endl;
   cout<<b;
   
    return 0;
}

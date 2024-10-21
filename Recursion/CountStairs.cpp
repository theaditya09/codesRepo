#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countDistinctWays(int nStairs) {
    if(nStairs == 2)
    {
        return 2;
    }

    if(nStairs == 1)
    {
        return 1;
    }

    return countDistinctWays(nStairs - 1) + 1;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ans = countDistinctWays(n);
    cout<<"Answer is : "<<ans;
}
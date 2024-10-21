#include<iostream>
using namespace std;

int binarysearch(int n)
{
    int start=0;
    int end=n;
    int mid = start + (end-start)/2;
    while(start<=end)
    {
      if(mid*mid == n)
      {
        return n;
      }  
      else if(mid*mid > n)
      {
        end = mid - 1;
      }
      else{
        start = mid + 1;
      }  
      mid = start + (end-start)/2;  
    }
    return 0;
}

int sqrt(int n)
{
    int ans;
    int start=0;
    int end=n;
    int mid = start + (end-start)/2;
    while(start<=end)
    {
      if(mid*mid == n)
      {
        return mid;
      }  
      else if(mid*mid > n)
      {
        ans = mid;
        end = mid - 1;
      }
      else{
        ans = mid;
        start = mid + 1;
      }  
      mid = start + (end-start)/2;  
    }
    return ans;
}

int main()
{
    int n=256;
    cout<<"The square root of "<<n<<" is : "<<sqrt(n)<<endl;
    return 0;
}
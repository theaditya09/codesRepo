#include<iostream>
using namespace std;

string rev(char str[],int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        char temp = str[i];
        str[i] = str[j];
        str [j] = temp;
        i++;
        j--; 
    }
    return str;
}

int main()
{
    int n;
    cout<<"Enter Size of String : ";
    cin>>n;
    char str[n];
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"Final Reversed string is : "<<rev(str,n);
}
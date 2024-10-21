#include <iostream>
using namespace std; 

int main() {
    int arr[26] = {0};
    string str = "intellectual";

    for(int i=0; i<str.size(); i++)
    {
        arr[(str[i] - 'a')]++;
    }

    for(int i=0; i<26; i++)
    {
        cout<<arr[i]<<" ";
    }
    int max = 0;
    int maxIndex = 0;

    for(int i=0; i<26;i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    arr[maxIndex] = 0;
    maxIndex = 0;
    max = 0;

    for(int i=0; i<26;i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    char ans = maxIndex + 'a';
    cout<<ans<<endl;

    cout<<"Printing arr : "<<endl;

    for(int i=0; i<26; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
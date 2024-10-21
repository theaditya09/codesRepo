#include <iostream>
using namespace std; 

int main() {
    string str;
    cin>>str;

    string part;
    cin>>part;

    // str.erase(i-1,part.length());

    int i=0;
    while(i<str.length())
    {
        int temp=i;
        int j=0;
        while(j<part.length())
        {
            if(str[temp] == part[j])
            {
                temp++;
                j++;
            }
            else{
                break;
            }
        }

        if(j==part.length())
        {
            str.erase(i,part.length());
            i=0;
        }
        i++;
    }
    cout<<str;
    return 0;
}
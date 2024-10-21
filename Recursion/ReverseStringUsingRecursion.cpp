#include <iostream>
#include <string>
using namespace std; 

void rev(string &str, int s, int e)
{
    if(s>e)
    {
        return ;
    }

    swap(str[s], str[e]);
    rev(str, s+1, e-1);
}

int main() {

    string name = "aditya";
    rev(name,0,name.length()-1);
    cout<<name;
    return 0;
}
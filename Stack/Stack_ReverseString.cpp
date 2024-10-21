#include <iostream>
#include <stack>
using namespace std; 

int main() {
    stack <char> s;
    string str = "Hello";
    for(int i=0; i<str.length();i++)
    {
        s.push(str[i]);
    }

    string ans = "";

    cout<<s.size();

    while(!(s.empty()))
    {
        char temp = s.top();
        ans = ans + temp;
        s.pop();
    }

    cout<<"The reversed string is  : "<<ans<<endl;
    return 0;
}
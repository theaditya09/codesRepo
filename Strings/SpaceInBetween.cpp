#include <iostream>
using namespace std; 

int main() {
    string str = "My   Name   is   Shivansh";
    // for(int i=0; i<str.size()-1; i++)
    // {
    //     if(str[i]==' ' && str[i+1]==' ')
    //     {
    //         for(int j=i+1; j<str.size(); j++)
    //         {
    //             str[j] = str[j+1];
    //         }
    //         i--;
    //     }
    // }
    int x=2,y;
    for(int i=0;i<str.size();i++)
       {
            if(str[i]!=' ')
            {
                cout<<str[i];
                x=0;
           }
            else if(x==0 && str[i]==' ')
            {cout<<' ';
            x=1;

            }

       }

    
    
    return 0;
}
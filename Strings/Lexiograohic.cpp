#include <iostream>
using namespace std; 

int main() {
    string str1;
    string str2;

    cin>>str1>>str2;
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<str1.size(); i++)
        {
            if(str1[i]>='A' && str1[i]<='Z')
            {
                str1[i] = str1[i] - 'A' + 'a';
            }
            int temp = str1[i] - 'a';
            sum1 = sum1 + temp;
        }

        for(int i=0; i<str2.size(); i++)
        {
            if(str2[i]>='A' && str2[i]<='Z')
            {
                str2[i] = str2[i] - 'A' + 'a';
            }
            int temp = str2[i] - 'a';
            sum2 = sum2 + temp;
        }

        if(sum1==sum2)
        {
            cout<<"0";
        }
        else if(sum1>sum2)
        {
            cout<<"1";
        }
        else{
            cout<<"-1";
        }

    return 0;
}
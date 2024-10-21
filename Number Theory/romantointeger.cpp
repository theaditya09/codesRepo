#include<iostream>
using namespace std;
int main()
    {   
        string s;
        cout<<"Enter a string : "<<endl;
        cin>>s;
        int n = s.size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            char letter = s[i];
            char next_letter = s[i+1];
            
            switch(letter)
            {
                case 'I' :  switch(next_letter)
                            {
                                case 'V' :  ans = ans + 4;
                                            s[i+1] = 1;
                                            break;
                                case 'X' :  ans = ans + 9;
                                            s[i+1] = 1;
                                            break;
                                default :   ans = ans + 1;
                            }
                            break;

                case 'V' :  
                            ans = ans + 5;
                            break;

                case 'X' :  switch(next_letter)
                            {
                                case 'L' :  ans = ans + 40;
                                            s[i+1] = 1;
                                            break;
                                case 'C' :  ans = ans + 90;
                                            s[i+1] = 1;
                                            break;
                                default :   ans = ans + 10;
                            }
                            break;

                case 'L' :
                            ans = ans + 50;
                            break;

                case 'C' :  switch(next_letter)
                            {
                                case 'D' :  ans = ans + 400;
                                            s[i+1] = 1;
                                            break;
                                case 'M' :  ans = ans + 900;
                                            s[i+1] = 1;
                                            break;
                                default :   ans = ans + 100;
                            }
                            break;
                case 'D' :
                            ans = ans + 500;
                            break;
                case 'M' :
                            ans = ans + 1000;
                            break;
                            
            }
        }
        cout<<ans<<endl;

        return 0;
    }
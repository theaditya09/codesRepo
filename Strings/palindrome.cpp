#include <iostream>
#include<math.h>
#include<string>
using namespace std; 

int main() {
    /*
    int num=121;
    int temp = num;
    int ans=0;
    while(temp != 0)
    {
        int digit = temp%10;
        temp = temp / 10;
        cout<<digit<<"."<<endl;
        ans = (ans * 10) + digit;
        
    }
    cout<<ans; */

    string S;
    cin>>S;
    int i = 0;
	int j = S.length()-1;
	int ans = 0;
	while(i<=j)
	{
	    if(S[i]==S[j])
	    {
	        ans = 1;
	        i++;
	        j--;
	    }
	    else
	    {
	        ans = 0;
	        break;
	    }
	}
    cout<<S.length()<<endl;
    cout<<ans;
    return 0;
}
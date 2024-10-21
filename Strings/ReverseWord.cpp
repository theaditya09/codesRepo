#include <iostream>
using namespace std; 
bool check(char test)
{
    if(test>='a' && test<='z')
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    string str = "when all else fails reboot";
    string ans = "";
    string word = "";

    for(int i=str.size()-1; i>=0; i--)
    {
        
        if(check(str[i]))
        {
            word.push_back(str[i]);
        }
        
        else{
            for(int j=word.size()-1; j>=0; j--)
            {
                ans.push_back(word[j]);
            }
            ans.push_back('_');
            word = "";
        }
    }

    for(int j=word.size()-1; j>=0; j--)
            {
                ans.push_back(word[j]);
            }
            ans.push_back('_');
            word = "";
    cout<<ans;
    return 0;
}
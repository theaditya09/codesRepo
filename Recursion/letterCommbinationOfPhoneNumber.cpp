#include <bits/stdc++.h>
using namespace std; 

 void combinations(string digits, string mapping[], vector<string>& ans, string &str, int index)
    {

        if(index >= digits.size())
        {
            ans.push_back(str);
            return;
        }

        int digit = digits[index] - '0';

        for(int i=0; i<mapping[digit].size() ;i++)
        {
            string temp = str;
            str = str + mapping[digit][i];
            combinations(digits,mapping,ans,str,index+1);
            str = temp;
        }

    }

int main() {

        string digits = "23";
        vector<string> ans;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string str = "";
        combinations(digits,mapping,ans,str,0);

        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<endl;
        }
    
    return 0;
}
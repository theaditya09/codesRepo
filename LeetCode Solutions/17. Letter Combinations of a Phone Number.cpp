class Solution {
public:

    void combinations(string digits, string mapping[], vector<string>& ans, string &str, int index)
    {
        if(index >= digits.size())
        {
            ans.push_back(str);
            return;
        }

        int digit = digits[index] - '0';
        
        for(int i=0; i<mapping[digit].size();i++)
        {
            string temp = str;
            str = str + mapping[digit][i];
            combinations(digits,mapping,ans,str,index+1);
            str = temp;
        }

    }

    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits.size()==0) return ans;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string str = "";
        combinations(digits,mapping,ans,str,0);
        return ans;
    }
};
#include <iostream>
#include <vector>
#include <stack>
using namespace std; 

vector<int> prevSmallElement(vector<int>& arr) {
    stack<int> s;
    vector<int> ans(arr.size());
    for(int i=0; i<arr.size(); i++)
    {
        while(!s.empty() && arr[s.top()] > arr[i])
        {
            s.pop();
        }

        if(s.empty())
        {
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(i);
    }

    return ans;
}

int main() {

    vector<int> arr = {8,4,6,2,3};

    vector<int> ans = prevSmallElement(arr);

    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
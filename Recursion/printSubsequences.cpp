#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(vector<int> &arr, int index,vector<int> &res)
{
    if(index >= arr.size())
    {
        for(int i=0; i<res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }

    res.push_back(arr[index]);
    printSubsequence(arr, index+1 , res);
    res.pop_back();
    printSubsequence(arr,index+1, res);
}

int main() {
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }



    vector<int> res;
    printSubsequence(arr, 0, res);

    return 0;
}
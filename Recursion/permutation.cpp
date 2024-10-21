#include <bits/stdc++.h>
using namespace std; 

//with using extra O(n) space with the hash array
void permutation(vector<int>& arr, vector<int>& res,vector<int>& hash, int index)
{
    if(res.size()==arr.size())
    {
        for(int i=0; i<res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<arr.size(); i++)
    {
        if(!hash[i])
        {
            res.push_back(arr[i]);
            hash[i] = 1;
            permutation(arr,res,hash,i+1);
            hash[i] = 0;
            res.pop_back();
        }
    }
}

//without using extra space
void permutation2(vector<int>& arr, int index,  vector<vector<int>> &ans)
{

    if(index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    
    for(int i=index; i<arr.size(); i++)
    {
        swap(arr[i],arr[index]);
        permutation2(arr,index+1,ans);
        swap(arr[i],arr[index]);
    }
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> res;
    vector<int> hash(arr.size(),0);
    vector<vector<int>> ans;
    //permutation(arr,res,hash,0);
    permutation2(arr,0,ans);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
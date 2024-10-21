#include <iostream>
#include <vector>
using namespace std;

//printing all the subsequence with sum k
void printSubsequence(vector<int> &arr, int index,vector<int> &res, int sum, int k)
{
    if(index >= arr.size())
    {
        if(sum == k)
        {
            for(int i=0; i<res.size(); i++)
            {
                cout<<res[i]<<" ";
            }

            cout<<endl;
        }
        return;
    }

    res.push_back(arr[index]);
    sum += arr[index];
    printSubsequence(arr, index+1 , res, sum, k);
    res.pop_back();
    sum -= arr[index];
    printSubsequence(arr,index+1, res, sum, k);
}

//printing only one subsequence with sum k
bool printOneSubsequence(vector<int> &arr, int index,vector<int> &res, int sum, int k)
{
    if(index >= arr.size())
    {
        if(sum == k)
        {
            for(int i=0; i<res.size(); i++)
            {
                cout<<res[i]<<" ";
            }

            cout<<endl;
            return true;
        }
        return false;
    }

    res.push_back(arr[index]);
    sum += arr[index];

    if(printOneSubsequence(arr, index+1 , res, sum, k))
    {
        return true;
    }

    res.pop_back();
    sum -= arr[index];

    return printOneSubsequence(arr,index+1, res, sum, k);
}

//Count The Subsequences with sum k
int CountSubsequence(vector<int> &arr, int index, int sum, int k)
{
    if(index >= arr.size())
    {
        if(sum == k)
        {
           return 1;
        }
        return 0;
    }

    sum += arr[index];
    int take = CountSubsequence(arr, index+1 , sum, k);

    sum -= arr[index];
    int donttake = CountSubsequence(arr,index+1, sum, k);

    return take + donttake;
} 

int main() {
    
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    vector<int> res;
    int count = 0;
    int ans = CountSubsequence(arr, 0, 0, k);
    cout<<"count : "<<ans<<endl;


    return 0;
}
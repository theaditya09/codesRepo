#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int>& arr)
    {
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end-start)/2; 
        while(start<end)
        {
            if(arr[mid] >= arr[0])
            {
                start = mid + 1;
            } 
            else{
                end = mid;
            }
            mid = start + (end-start)/2; 
        }
        return start;
    }

    int upper(vector<int>& arr, int pivot, int target)
    {
        int start = 0;
        int end = pivot - 1;
        int mid = start + (end - start)/2;
        int ans = -1;
        while(start<=end)
        {
            if(target==arr[mid])
            {
                ans = mid; 
                return ans;
            }
            else if(target>arr[mid])
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }

    int lower(vector<int>& arr, int pivot, int target)
    {
        int start = pivot;
        int end = arr.size()-1;
        int mid = start + (end - start)/2;
        int ans = -1;
        while(start<=end)
        {
            if(target==arr[mid])
            {
                ans = mid; 
                return ans;
            }
            else if(target>arr[mid])
            {
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }

    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);

        if(target >= nums[0])
        {
            return upper(nums, pivot,target);
        }
        else{
            return lower(nums, pivot,target);
        }

        return 0;
    }

int main()
{
        vector<int> arr = {4,5,6,7,0,1,2};
        int pivot = getPivot(arr);
        int target = 3;
        int ans = -1;

        if(target >= arr[0])
        {
            ans = upper(arr,pivot,target);
        }
        else{
            ans = lower(arr,pivot,target); 
        }
        cout<<ans;
        return 0;
}
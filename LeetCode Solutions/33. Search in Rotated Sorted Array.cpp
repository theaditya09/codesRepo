class Solution {
public:

    int getPivot(vector<int>& arr)
    {
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end-start)/2; 
        while(start<end)
        {
            if(arr[mid] >= arr[0])
            {
                start = mid+1;
            } 
            else{
                end = mid;
            }
            mid = start + (end-start)/2; 
        }
        return start;
    }

    int bSearch(vector<int>& arr, int start, int end, int target)
    {
        int mid = start + (end-start)/2;
        while(start <= end)
        {
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(arr[mid] < target)
            {
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);
        if(target < nums[0])
        {
            return bSearch(nums,pivot,nums.size()-1,target);
        }
        return bSearch(nums,0,pivot,target);
    }
};
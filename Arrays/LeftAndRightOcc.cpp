#include <iostream>
#include <vector>
using namespace std; 

int leftOcc(vector<int> &nums, int target)
{
	int n = nums.size();
	int start = 0; 
	int end = n-1;
	int mid = start + (end - start)/2;
	int count=0;

	while(start<=end)
	{
		if(nums[mid]==target)
		{
			count++;
			end = mid -1;
		}
		else if(nums[mid]>target)
		{
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
		mid = start + (end - start)/2;
	}
	return count;
}

int rightOcc(vector<int> &nums, int target)
{
	int n = nums.size();
	int start = 0; 
	int end = n-1;
	int mid = start + (end - start)/2;
	int count=0;

	while(start<=end)
	{
		if(nums[mid]==target)
		{
			count++;
			start = mid + 1;
		}
		else if(nums[mid]>target)
		{
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
		mid = start + (end - start)/2;
	}
	return count;
}

int main() {
    vector<int> nums1 = {1, 1, 1, 2, 2, 3, 3};
	int left = leftOcc(nums1,3);
	int right = rightOcc(nums1,3);
	cout<<left+right-1<<endl;
    return 0;
}
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            int left=0;
            int right=0;

            for(int j=0; j<i; j++)
            {
                left = left + nums[j];
            }
            for(int k=(i+1); k<nums.size(); k++)
            {
                right = right + nums[k];
            }
            if(left==right)
            {
                return i;
            }
        }
        return -1;
    }
};
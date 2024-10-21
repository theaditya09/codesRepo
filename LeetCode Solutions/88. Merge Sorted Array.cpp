class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int j = 0, i=0;
            while(j < n && m!=0 && n!=0)
            {
                if(nums2[j]<=nums1[0])
                {
                    nums1.pop_back();
                    nums1.insert(nums1.begin(), nums2[j]);
                    m++;
                    j++;
                }
                else if(nums2[j] >= nums1[m-1])
                {
                    nums1.pop_back();
                    nums1.insert(nums1.begin()+m, nums2[j]);
                    m++;
                    j++;
                }
                else if(nums2[j] >= nums1[i] && nums2[j] <= nums1[i+1])
                {
                    nums1.pop_back();
                    nums1.insert(nums1.begin()+(i+1), nums2[j]);
                    m++;
                    j++;
                    i++;
                }
                else{
                    i++;
                }
            }

            if(m==0)
            {
                nums1 = nums2;
            }

        }

    };

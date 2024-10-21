class Solution {
public:

    void generateSubsets(vector<int>& arr, vector<int>& res, vector<vector<int>>& ans, int index)
    {
        ans.push_back(res);
        for(int i = index; i<arr.size(); i++)
        {
            if(i!=index && arr[i]==arr[i-1]) continue;
            
            res.push_back(arr[i]);
            generateSubsets(arr,res,ans,i+1);
            res.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> res;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        generateSubsets(nums,res,ans,0);
        return ans;
    }
};
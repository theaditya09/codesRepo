class Solution {
public:

    void generateSubsets(vector<int>& arr, vector<int>& res, vector<vector<int>> &ans, int index)
    {
        if(index >= arr.size())
        {
            ans.push_back(res);
            return;
        }

        res.push_back(arr[index]);
        generateSubsets(arr,res,ans,index+1);

        res.pop_back();
        generateSubsets(arr,res,ans,index+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> res;
        generateSubsets(nums, res, ans, 0);
        return ans;
    }
};
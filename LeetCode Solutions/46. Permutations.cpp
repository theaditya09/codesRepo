class Solution {
public:

    void permutations(vector<vector<int>>& ans, vector<int> &arr, int index)
    {
        if(index >= arr.size())
        {
            ans.push_back(arr);
            return;
        }

        for(int i=index; i<arr.size(); i++)
        {
            swap(arr[index],arr[i]);
            permutations(ans,arr,index+1);
            swap(arr[index],arr[i]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        permutations(ans,nums,0);
        return ans;
        
    }
};
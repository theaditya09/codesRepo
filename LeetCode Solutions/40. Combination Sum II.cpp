class Solution {
public:

    void solve(vector<int>& arr, int target, int index, vector<int>& res, vector<vector<int>>& ans)
    {
       if(target == 0)
       {
            ans.push_back(res);
            return;
       }

       for(int i=index; i<arr.size(); i++)
       {
            if(i>index && arr[i]==arr[i-1])
            {
                continue;
            }
        
            if(arr[i] > target)
            {
                break;
            }

            res.push_back(arr[i]);
            solve(arr,target - arr[i], i+1, res,ans);
            res.pop_back();

       }


    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, 0, res, ans);
        return ans;

    }
};
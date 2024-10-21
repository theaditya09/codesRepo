class Solution {
public:

    void solve(vector<vector<int>>& ans, vector<int>& res, int target, int i, int size)
    {
        if(i >= 10)
        {
            if(target == 0 && res.size() == size)
            {
                ans.push_back(res);
            }
            return;
        }
        else if(target < 0){
            return;
        }

        if(res.size() <= size)
        {
            res.push_back(i);
            solve(ans,res,target-i,i+1,size);

            res.pop_back();
            solve(ans,res,target,i+1,size);
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> res;
        solve(ans, res, n, 1, k);
        return ans;
    }
};
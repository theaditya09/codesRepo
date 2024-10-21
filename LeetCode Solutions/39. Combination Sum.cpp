class Solution {
public:

    void fCall(vector<vector<int>>& ans, vector<int>& candidates, vector<int>& res, int target, int index)
    {
        if(index >= candidates.size() && target != 0)
        {
            return;
        }

        if(target == 0)
        {
            ans.push_back(res);
            return;
        }

        else if(target < 0)
        {
            return;
        }

        res.push_back(candidates[index]);
        fCall(ans, candidates, res, target-candidates[index], index);

        res.pop_back();
        fCall(ans, candidates, res, target, index+1);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> res;
        fCall(ans, candidates, res, target, 0);
        return ans;
        
    }
};
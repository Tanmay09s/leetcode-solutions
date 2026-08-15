class Solution {
public:

    void helper(vector<int>& candidates, int target, int i,
                vector<int>& temp, vector<vector<int>>& ans) {

        // Target reached
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // No more elements
        if (i == candidates.size() || target < 0)
            return;

        // PICK
        if (candidates[i] <= target) {
            temp.push_back(candidates[i]);

            // Same index again because we can reuse the element
            helper(candidates, target - candidates[i], i,
                   temp, ans);

            temp.pop_back();
        }

        // NOT PICK
        helper(candidates, target, i + 1,
               temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                        int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        helper(candidates, target, 0, temp, ans);

        return ans;
    }
};
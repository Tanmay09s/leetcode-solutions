class Solution {
public:

   int helper(int i, int prev_idx, vector<int>& arr,
               vector<vector<int>>& dp) {

        if (i == arr.size())
            return 0;

        if (dp[i][prev_idx + 1] != -1)
            return dp[i][prev_idx + 1];

        // Don't take arr[i]
        int len = helper(i + 1, prev_idx, arr, dp);

        // Take arr[i]
        if (prev_idx == -1 || arr[i] > arr[prev_idx]) {
            len = max(len, 1 + helper(i + 1, i, arr, dp));
        }

        return dp[i][prev_idx + 1] = len;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return helper(0,-1,nums,dp);
    }
};
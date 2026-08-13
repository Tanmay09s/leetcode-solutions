class Solution {
public:

    int helper(vector<int>&arr,int idx,int prev_idx,vector<vector<int>>&dp){
        if(idx == arr.size())return 0;
        if(dp[idx][prev_idx + 1] != -1)return dp[idx][prev_idx + 1];

        int len1 = 0 + helper(arr,idx+1,prev_idx,dp);
        int len2 = INT_MIN;
        if(prev_idx == -1 || arr[idx] > arr[prev_idx]){
             len2 = 1 + helper(arr,idx+1,idx,dp);
        }
        return dp[idx][prev_idx + 1] = max(len1,len2);
    }
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));

        return helper(arr,0,-1,dp);
    }
};
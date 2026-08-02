class Solution {
public:

    int solve(int i,vector<int>arr,vector<int>&dp){
        if(i >= arr.size())return 0;

        if(dp[i] != -1)return dp[i];
        int take = arr[i] + solve(i+2,arr,dp);
        int skip = solve(i+1,arr,dp);

        return dp[i] = max(take,skip);
    }
     
    int rob(vector<int>& arr) {
        int n = arr.size();
        vector<int>dp(n,-1);
        return solve(0,arr,dp);
    }
};
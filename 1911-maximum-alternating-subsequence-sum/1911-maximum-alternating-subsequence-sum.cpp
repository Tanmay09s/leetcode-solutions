class Solution {
public:

    long long helper(vector<int>&arr,vector<vector<long long>>&dp,int i,int even){
        if(i >= arr.size())return 0;
        if(dp[i][even] != -1)return dp[i][even];

        long long skip = helper(arr,dp,i+1,even);
        long long take;
        if(even)take = arr[i] + helper(arr,dp,i+1,0);
        else take = -arr[i] + helper(arr,dp,i+1,1);

        return dp[i][even] = max(take,skip);
    }
    long long maxAlternatingSum(vector<int>& arr) {
        int n = arr.size();
        vector<vector<long long>>dp;
        dp.assign(n,vector<long long>(2,-1));
        return helper(arr,dp,0,1);
    }
};
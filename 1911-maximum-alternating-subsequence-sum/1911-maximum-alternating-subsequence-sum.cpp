class Solution {
public:
vector<vector<long long>>dp;

    long long solve(int i,int even,vector<int>& arr){
        if(i >= arr.size())return 0;
        if(dp[i][even] != -1)return dp[i][even];

        long long skip = solve(i+1,even,arr);

        long long take;
        if(even)take = arr[i] + solve(i+1,0,arr);
        else take = -arr[i] + solve(i+1,1,arr);

        return dp[i][even] = max(take,skip);
    }
    long long maxAlternatingSum(vector<int>& arr) {
        int n = arr.size();
        dp.assign(n,vector<long long>(2,-1));

        return solve(0,1,arr);
    }
};
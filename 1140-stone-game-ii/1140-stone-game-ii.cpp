class Solution {
public:
    int n;
    int helper(int i,int M,vector<int>& suffix,vector<vector<int>>&dp){
        if(i > n)return 0;

        if(2 * M >= n - i)
            return suffix[i];
        if(dp[i][M] != -1)return dp[i][M];

        int total = suffix[i];
        int ans = 0;

        for(int x = 1;x <= 2 * M;x++){
            int opp = helper(i + x,max(x,M),suffix,dp);

            int curr = total - opp;
            ans = max(ans,curr);
        }
        return dp[i][M] = ans;
    }

    int stoneGameII(vector<int>& arr) {
        n = arr.size();
        vector<int>suffix(n,0);
        vector<vector<int>>dp(n,vector<int>(n+1,-1));

        suffix[n - 1] = arr[n - 1];

        for(int i = n - 2;i>=0;i--){
            suffix[i] = arr[i] + suffix[i+1];
        }

        return helper(0,1,suffix,dp);
    }
};
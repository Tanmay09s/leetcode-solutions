class Solution {
public:

    bool helper(int n,vector<int>&dp){
        // no stones left Current player cannot move
        if(n == 0)return false;

        if(dp[n] != -1)return dp[n];
        //try every possible square
        for(int x = 1;x*x <= n;x++){
            int remaining = n - x * x;

            //if opponent loses from here
            // current player wins
            if(!helper(remaining,dp)){
                return dp[n] = true;
            }
        }
        //No move can make opponent lose
        return dp[n] = false;

    }
    
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};
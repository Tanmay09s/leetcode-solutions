class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,false);
        for(int i = 1;i<=n;i++){
            for(int x = 1;x*x<=i;x++){
                int rem = i - x * x;

                if(dp[rem] == false){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
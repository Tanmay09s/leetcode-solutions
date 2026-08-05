class Solution {
public:

    int helper(vector<int>arr,int start,int end){
        int len = end - start + 1;
        vector<int>dp(len + 2, 0);

        for(int i = len - 1 ;i >= 0; i--){
            int take = arr[start + i] + dp[i+2];
            int skip = dp[i+1];
            dp[i] = max(take,skip);
        }
        return dp[0];
    }

    int rob(vector<int>& arr) {
        int n = arr.size();
        if(n == 1)return arr[0];
        int take1 = helper(arr,0,n-2);
        int skip1 = helper(arr,1,n-1);

        return max(take1,skip1);
    }
};
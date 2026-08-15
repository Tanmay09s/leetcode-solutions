class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();

        int xr = 0;
        bool hasNonZero = false;

        for(int num : nums){
            xr = xr ^ num;

            if(xr != 0)hasNonZero = true;
        }

        if(xr != 0)return n;

        if(hasNonZero == false)return 0;

        return n - 1;
    }
};
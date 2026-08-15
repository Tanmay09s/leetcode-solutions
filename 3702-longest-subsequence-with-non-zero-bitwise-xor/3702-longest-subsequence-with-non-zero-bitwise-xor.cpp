class Solution {
public:
    int longestSubsequence(vector<int>& arr) {
        int n = arr.size();

        int xr = 0;
        bool hasNonZero = false;

        for(int x : arr){
            xr = xr ^ x;

            if(x != 0)hasNonZero = true;
        }
        if(xr != 0)return n;

        if(!hasNonZero)return 0;

        return n - 1;
    }
};
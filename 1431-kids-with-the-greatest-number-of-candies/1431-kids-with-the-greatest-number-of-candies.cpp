class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int extraCandies) {
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i : arr)maxi = max(maxi,i);

        vector<bool>ans(n);

        for(int i=0;i<n;i++){
            if(arr[i] + extraCandies >= maxi)ans[i] = true;
            else ans[i] = false;
        }
        return ans;
    }
};
class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        int left = 0;
        int right = 0;
        int n = arr.size();
        int ans = INT_MIN;

        while(right < n){
            mpp[arr[right]]++;

            while(mpp[arr[right]] > k){
                mpp[arr[left]]--;
                left++;
            }
            ans = max(ans,right - left + 1);
            right++;
        }
        return ans;
    }
};
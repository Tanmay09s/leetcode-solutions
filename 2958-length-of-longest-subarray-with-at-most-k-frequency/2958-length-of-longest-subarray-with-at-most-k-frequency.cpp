class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int n = arr.size();
        int right = 0;
        int left = 0;
        int ans = INT_MIN;
        unordered_map<int,int>mpp;

        for(right;right < n;right++){
            mpp[arr[right]]++;

            while(mpp[arr[right]] > k){
                mpp[arr[left]]--;
                left++;
            }
            ans = max(ans,right - left + 1);
        }
        return ans;
    }
};
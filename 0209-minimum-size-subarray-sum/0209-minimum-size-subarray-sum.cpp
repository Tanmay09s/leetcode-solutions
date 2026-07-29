class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int minLen = INT_MAX;
        int right = 0;
        int left = 0;
        
        int currSum = 0;
        while(right < n){
            currSum += arr[right];

            while(currSum >= target){
                minLen = min(minLen,right - left + 1);
                currSum -= arr[left];
                left++;
            }
            right++;
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};
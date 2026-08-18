class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        if(k == n)return *max_element(nums.begin(),nums.end());

            if (k == 1) {
            int maxValue = -1;

            for (int i = 0; i < n; i++) {
                if (mpp[nums[i]] == 1 && nums[i] > maxValue) {
                    maxValue = nums[i];
                }
            }

            return maxValue;
        }

        if(nums[0] == nums[n-1])return -1;
        if(mpp[nums[0]] == 1 && mpp[nums[n-1]] == 1)return max(nums[0],nums[n-1]);
        if(mpp[nums[0]] == 1 && mpp[nums[n-1]] > 1) return nums[0];
        if(mpp[nums[0]] > 1 && mpp[nums[n-1]] == 1) return nums[n-1];

        return -1;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mpp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int rem = target - arr[i];

            if(mpp.find(rem) != mpp.end()){
                return {i,mpp[rem]};
            }
            else 
            mpp[arr[i]] = i;
        }
        return {-1,-1};
    }
};
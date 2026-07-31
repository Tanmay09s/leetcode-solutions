class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        int n = arr.size();
        int right = -1;
        int left = -1;

        int mx = INT_MIN;
        int mn = INT_MAX;

        for(int i=0;i<n;i++){
            mx = max(mx,arr[i]);

            if(mx > arr[i])right = i;
        }
        for(int i=n-1;i>=0;i--){
            mn = min(mn,arr[i]);

            if(mn < arr[i])left = i;
        }

        if(right == -1 || left == -1)return 0;
        return right - left + 1;
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int firstSmallest = arr[0];
        int secondSmallest = arr[1];

        int firstLargest = arr[n - 1];
        int secondLargest = arr[n - 2];
        int thirdLargest = arr[n - 3];

        return max(firstLargest * secondLargest * thirdLargest,firstSmallest * secondSmallest * firstLargest);
    }
};
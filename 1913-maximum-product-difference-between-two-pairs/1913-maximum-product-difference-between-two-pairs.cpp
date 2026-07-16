class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        int maxi = arr[0];
        int maxi2 = INT_MIN;
        int mini = arr[0];
        int mini2 = INT_MAX;
        int n = arr.size();

        for(int i = 1; i < n; i++){
            if(arr[i] > maxi){
                maxi2 = maxi;
                maxi = arr[i];
            }
            else if(arr[i] > maxi2){
                maxi2 = arr[i];
            }

            if(arr[i] < mini){
                mini2 = mini;
                mini = arr[i];
            }
            else if(arr[i] < mini2){
                mini2 = arr[i];
            }
        }

        return (maxi * maxi2) - (mini * mini2);
    }
};
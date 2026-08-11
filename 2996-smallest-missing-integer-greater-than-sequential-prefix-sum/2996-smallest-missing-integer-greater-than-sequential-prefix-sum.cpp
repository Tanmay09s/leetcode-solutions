class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n = arr.size();
        int sum = arr[0];

        for(int i = 1;i<n;i++){
            if(arr[i - 1] + 1 == arr[i])sum += arr[i];
            else break;
        }
        int ans = sum;
        unordered_set<int>st(arr.begin(),arr.end());
        
        while(st.count(ans))ans++;

        return ans;
    }
};
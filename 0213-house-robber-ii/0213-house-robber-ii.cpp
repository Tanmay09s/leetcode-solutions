class Solution {
public:

    int helper(vector<int>arr,int start,int end){
        int next1 = 0;
        int next2 = 0;


        for(int i = end ;i>= start ;i--){
            int take = arr[i] + next2;
            int skip = next1;

            int curr = max(take,skip);
            next2 = next1;
            next1 = curr;
        }
           return next1;
    }

    int rob(vector<int>& arr) {
        int n = arr.size();
        if(n == 1)return arr[0];
        int take1 = helper(arr,0,n-2);
        int skip1 = helper(arr,1,n-1);

        return max(take1,skip1);
    }
};
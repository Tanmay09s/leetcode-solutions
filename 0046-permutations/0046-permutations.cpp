class Solution {
public:

    void helper(int idx,vector<vector<int>>&ans,vector<int>&temp,vector<int>arr){
        if(idx == arr.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = idx;i<arr.size();i++){
            swap(arr[idx],arr[i]);
            temp = arr;
            helper(idx+1,ans,temp,arr);
            swap(arr[idx],arr[i]);
            temp = {};
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>ans;
        vector<int>temp;

        helper(0,ans,temp,arr);
        return ans;
    }
};
class Solution {
public:
    void helper(int idx,vector<vector<int>>&ans,vector<int>temp,vector<int>arr){
        if(idx == arr.size()){
            ans.push_back(temp);
            return;
        }

        unordered_set<int>st;

        for(int i = idx;i<arr.size();i++){
            if(st.count(arr[i]))continue;
            st.insert(arr[i]);
            swap(arr[i],arr[idx]);
            temp = arr;
            helper(idx+1,ans,temp,arr);
            swap(arr[i],arr[idx]);
            temp = {};
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(0,ans,temp,arr);
        return ans;
    }
};
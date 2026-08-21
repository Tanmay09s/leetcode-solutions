class Solution {
public:  
    void helper(int start,vector<int>&temp, vector<vector<int>>&ans,int n,int k){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }

        for(int i = start;i<=n;i++){
            temp.push_back(i);
            helper(i+1,temp,ans,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
         vector<vector<int>>ans;
         vector<int>temp;
         int start = 1;
         helper(start,temp,ans,n,k);
         return ans;
    }
};
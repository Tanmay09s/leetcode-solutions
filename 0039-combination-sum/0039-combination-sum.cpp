class Solution {
public:

    void helper(vector<int>candidates,int
     target,int i,vector<vector<int>>&ans,vector<int>&temp){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(i == candidates.size() || target < 0)return;

        if(candidates[i] <= target){
            temp.push_back(candidates[i]);

            helper(candidates,target - candidates[i],i,ans,temp);
            temp.pop_back();
        }
        helper(candidates,target,i+1,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;

        helper(candidates,target,0,ans,temp);
        return ans;
    }
};
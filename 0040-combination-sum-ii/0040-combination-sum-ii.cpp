class Solution {
public:
    void helper(int i,vector<int>&temp,vector<vector<int>>&ans,vector<int>candidate,int target){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int j = i;j<candidate.size();j++){
            if(j > i && candidate[j] == candidate[j-1])continue;
            if(candidate[j] > target)break;
            temp.push_back(candidate[j]);
            helper(j+1,temp,ans,candidate,target - candidate[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());

        helper(0,temp,ans,candidates,target);
        return ans;
    }
};
class Solution {
public:  
    void helper(vector<vector<int>>&ans,vector<int>&temp,int idx,vector<int>nums){
       ans.push_back(temp);

       for(int i=idx;i<nums.size();i++){
        temp.push_back(nums[i]);
        helper(ans,temp,i+1,nums);
        temp.pop_back();
       }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;

        helper(ans,temp,0,nums);
        return ans;
    }
};
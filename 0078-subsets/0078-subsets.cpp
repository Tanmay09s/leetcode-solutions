class Solution {
public:

void helper(vector<vector<int>>&ans,vector<int>output,int i,vector<int>&nums){
    if(i >= nums.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    helper(ans,output,i+1,nums);

    int num = nums[i];
    output.push_back(num);
    
    //include
    helper(ans,output,i+1,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        helper(ans,output,0,nums);
        return ans;
    }
};
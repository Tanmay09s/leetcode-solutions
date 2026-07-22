/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void helper(vector<vector<int>>& ans,vector<int>path,TreeNode* root,int targetSum){
        if(root == NULL)return;
        targetSum -= root -> val;
        path.push_back(root -> val);

        if(root -> right == NULL && root -> left == NULL && targetSum == 0)ans.push_back(path);

        helper(ans,path,root -> left,targetSum);
        helper(ans,path,root -> right,targetSum);

        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;

        helper(ans,path,root,targetSum);
        return ans;
    }
};
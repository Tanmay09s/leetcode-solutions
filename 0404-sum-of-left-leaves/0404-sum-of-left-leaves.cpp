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
    void helper(int &ans,TreeNode* root){
        if(root == NULL)return;

        helper(ans,root -> left);

        if(root -> left != NULL){
            if(root -> left -> left == NULL && root -> left -> right == NULL){
                ans += root -> left -> val;
            }
        }
        helper(ans,root -> right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        helper(ans,root);
        return ans;
    }
};
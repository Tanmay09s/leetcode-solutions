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

    
int sum = 0;
    
    void helper(int leftN,int rightN,TreeNode* root){
        if(root == NULL)return;
        sum = max(sum,max(leftN,rightN));

        helper(rightN+1,0,root -> left);
        helper(0,leftN +1,root -> right);
    }

    int longestZigZag(TreeNode* root) {
        helper(0,0,root);
        return sum;
    }
};
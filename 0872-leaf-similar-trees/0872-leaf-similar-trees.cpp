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

 void helper(vector<int>&temp,TreeNode* root){
        if(root == NULL)return;
        if(root -> left == NULL && root -> right == NULL)temp.push_back(root->val);

        helper(temp, root -> left);
        helper(temp, root -> right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>temp1;
        vector<int>temp2;

        helper(temp1,root1);
        helper(temp2,root2);

        if(temp1.size() != temp2.size())return false;
        int n = temp1.size();
        for(int i=0;i<n;i++){
            if(temp1[i] != temp2[i])return false;
        }
        return true;
    }
};
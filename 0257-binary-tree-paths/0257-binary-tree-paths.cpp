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

    vector<string>ans;

    void helper(TreeNode* root,string s){
        if(root == NULL)return ;
        if(!s.empty())s += "->";
        s += to_string(root -> val);

        if(root -> right == NULL && root -> left == NULL){
            ans.push_back(s);
            return;
        }
        helper(root -> left,s);
        helper(root -> right,s);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";

        helper(root,s);
        return ans;
    }
};
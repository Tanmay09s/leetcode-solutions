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
unordered_set<int>st;

    bool dfs(TreeNode* root,int k){
        if(root == NULL)return false;
        int rem = k - root-> val;
        if(st.count(rem))return true;
        st.insert(root -> val);

        return findTarget(root -> left,k) || findTarget(root -> right,k);
    }

    bool findTarget(TreeNode* root, int k) {
       return dfs(root,k);
    }
};
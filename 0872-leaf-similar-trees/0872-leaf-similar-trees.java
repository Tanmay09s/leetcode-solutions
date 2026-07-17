/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void helper(List<Integer>t1,TreeNode root){
        if(root == null)return;
        if(root.right == null && root.left == null)t1.add(root.val);

        helper(t1,root.left);
        helper(t1,root.right);
    }

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer>t1 = new ArrayList<>();
        List<Integer>t2 = new ArrayList<>();

        helper(t1,root1);
        helper(t2,root2);

        return t1.equals(t2);
    }
}
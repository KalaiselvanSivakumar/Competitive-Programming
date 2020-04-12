class Height {
	int value;
}

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {

	public int diameterOpt(TreeNode node, Height height) {
		if (node == null) {
			// height.value will be 0 by default. So no need to set it explicitly.
			return 0;
		}

		Height leftHeight = new Height();
		Height rightHeight = new Height();
		int leftDiameter = diameterOpt(node.left, leftHeight);
		int rightDiameter = diameterOpt(node.right, rightHeight);

		height.value = Math.max(leftHeight.value, rightHeight.value) + 1;
		// For actual diameter, + 1 must be uncommented in the below line.
		// The question is length of the diameter and not the diameter itself.
		// The below solution is taken from gfg
		return Math.max(leftHeight.value + rightHeight.value /* + 1*/,
			Math.max(leftDiameter, rightDiameter));
	}

	public int diameterOfBinaryTree(TreeNode root) {
		return diameterOpt(root, new Height());
	}
}

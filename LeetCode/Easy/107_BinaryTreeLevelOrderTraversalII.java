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
	public List<List<Integer>> levelOrderBottom(TreeNode root) {
		List<List<Integer>> levelOrderData = new ArrayList<>();
		if (root == null) {
			return levelOrderData;
		}
		Queue<TreeNode> currentLevelQueue = new LinkedList<>();
		currentLevelQueue.add(root);
		while (!currentLevelQueue.isEmpty()) {
			List<Integer> currentLevelData = new ArrayList<>();
			Queue<TreeNode> nextLevelQueue = new LinkedList<>();
			while (!currentLevelQueue.isEmpty()) {
				TreeNode currentNode = currentLevelQueue.remove();
				currentLevelData.add(currentNode.val);
				if (currentNode.left != null)
					nextLevelQueue.add(currentNode.left);
				if (currentNode.right != null)
					nextLevelQueue.add(currentNode.right);
			}
			levelOrderData.add(0, currentLevelData);
			currentLevelQueue = nextLevelQueue;
		}
		return levelOrderData;
	}
}

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
	public ListNode middleNode(ListNode head) {
		ListNode slowTraversalPtr = head;
		ListNode fastTraversalPtr = head;
		while (fastTraversalPtr.next != null) {
			fastTraversalPtr = fastTraversalPtr.next;
			if (fastTraversalPtr.next != null) {
				fastTraversalPtr = fastTraversalPtr.next;
			}
			slowTraversalPtr = slowTraversalPtr.next;
		}
		return slowTraversalPtr;
	}
}

// Daily Coding Problems: 145

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

public class Solution {
	public ListNode swapPairs(ListNode head) {
		if (head == null || head.next == null) {
			return head;
		}
		ListNode previousBatch = null;
		ListNode current = head;
		while (current != null && current.next != null) {
			ListNode temp = current;
			current = current.next;
			temp.next = current.next;
			current.next = temp;
			if (previousBatch != null) {
				previousBatch.next = current;
			}
			else {
				head = current;
			}
			previousBatch = temp;
			current = temp.next;
		}
		return head;
	}
}

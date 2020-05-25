// Daily Coding Problems: 26 - Medium

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
	public ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode fastPtr = head;
		while (n != 0 && fastPtr != null) {
			fastPtr = fastPtr.next;
			--n;
		}
		ListNode slowPtr = head;
		if (fastPtr == null) {
			return head.next;
		}
		while (fastPtr.next != null) {
			fastPtr = fastPtr.next;
			slowPtr = slowPtr.next;
		}
		slowPtr.next = slowPtr.next.next;
		return head;
	}
}

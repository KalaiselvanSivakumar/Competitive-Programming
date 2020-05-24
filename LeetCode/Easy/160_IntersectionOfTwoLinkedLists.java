// Daily Coding Problems: 20 - Easy

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

public class Solution {
	public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
		if (headA == null || headB == null) {
			return null;
		}
		int length1 = Solution.getLength(headA);
		int length2 = Solution.getLength(headB);
		if (length2 > length1) {
			int tempLength = length1;
			length1 = length2;
			length2 = tempLength;
			ListNode tempNode = headA;
			headA = headB;
			headB = tempNode;
		}
		int moveCount = length1 - length2;
		while (moveCount != 0) {
			headA = headA.next;
			--moveCount;
		}
		while (headA != null) {
			if (headA == headB) {
				return headA;
			}
			headA = headA.next;
			headB = headB.next;
		}
		return null;
	}

	public static int getLength(ListNode head) {
		int length = 0;
		while (head != null) {
			head = head.next;
			++length;
		}
		return length;
	}
}

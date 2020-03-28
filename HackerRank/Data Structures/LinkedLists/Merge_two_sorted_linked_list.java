// Complete the mergeLists function below.

/*
	* For your reference:
	*
	* SinglyLinkedListNode {
	*     int data;
	*     SinglyLinkedListNode next;
	* }
	*
	*/
static SinglyLinkedListNode mergeLists(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
	if (head1 == null) {
		return head2;
	}
	if (head2 == null) {
		return head1;
	}
	SinglyLinkedListNode temp, head;
	if (head1.data < head2.data) {
		head = head1;
		head1 = head1.next;
	}
	else {
		head = head2;
		head2 = head2.next;
	}
	temp = head;
	while (head1 != null && head2 != null) {
		if (head1.data < head2.data) {
			temp.next = head1;
			head1 = head1.next;
		}
		else {
			temp.next = head2;
			head2 = head2.next;
		}
		temp = temp.next;
	}
	if (head1 != null) {
		temp.next = head1;
	}
	else {
		temp.next = head2;
	}
	return head;
}
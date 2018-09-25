// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
	SinglyLinkedListNode *traveller = head, *temp;
	temp = new SinglyLinkedListNode(data);
	temp->data = data;

	if (head == NULL) {
		return temp;
	}

	if (position == 0) {
		temp->next = head;
		head = temp;
	}
	else {
		while (--position) {
			traveller = traveller->next;
		}
		temp->next = traveller->next;
		traveller->next = temp;
	}
	return head;
}
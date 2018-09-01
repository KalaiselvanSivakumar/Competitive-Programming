// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
	SinglyLinkedListNode *temp = head, *tail_node;
	tail_node = new SinglyLinkedListNode(data);
	if (head == NULL) {
		head = tail_node;
	}
	else {
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = tail_node;
	}
	return head;
}
// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
	SinglyLinkedListNode *head = new SinglyLinkedListNode(data);
	if (llist != NULL) {
		head->next = llist;
	}
	return head;
}
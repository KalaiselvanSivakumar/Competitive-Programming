// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode *reverse(SinglyLinkedListNode *head)
{
	if (head == NULL) {
		return head;
	}
	SinglyLinkedListNode *temp = head, *prev = NULL, *curr;
	while (temp) {
		curr = temp;
		temp = temp->next;
		curr->next = prev;
		prev = curr;
	}
	return curr;
}
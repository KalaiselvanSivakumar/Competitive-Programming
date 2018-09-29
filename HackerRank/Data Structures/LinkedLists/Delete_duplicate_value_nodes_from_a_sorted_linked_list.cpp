// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head) {
	SinglyLinkedListNode *temp = head, *next;
	while (temp) {
		next = temp->next;
		if (next && temp->data == next->data) {
			temp->next = next->next;
			next->next == NULL;
			free(next);
		}
		else {
			temp = temp->next;
		}
	}
	return head;
}
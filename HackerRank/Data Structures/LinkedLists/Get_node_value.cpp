// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode *head, int positionFromTail)
{
	SinglyLinkedListNode *temp = head;
	while (positionFromTail) {
		head = head->next;
		--positionFromTail;
	}
	while (head->next) {
		head = head->next;
		temp = temp->next;
	}
	return temp->data;
}
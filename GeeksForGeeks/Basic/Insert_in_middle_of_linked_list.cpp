/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
Structure of the Node of the linked list is as
struct Node {
	int data;
	Node* next;
};
*/
// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
    Node* temp1 = head;
    Node* temp2 = NULL;
    while (temp1 != NULL) {
        temp1 = temp1->next;
        if (temp1 != NULL) {
            temp1 = temp1->next;
        }
        if (temp2 != NULL) {
            temp2 = temp2->next;
        }
        else {
            temp2 = head;
        }
    }
    Node *newNode = (Node *) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = temp2->next;
    temp2->next = newNode;
    return head;
}

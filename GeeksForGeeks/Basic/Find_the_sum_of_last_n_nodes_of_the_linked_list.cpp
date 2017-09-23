/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Structure of the node of the linked list is as
struct Node {
	int data;
	struct Node* next;
};*/
// your task is to complete this function
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    struct Node* node = head;
    int sum = 0;
    while (node && n) {
        --n;
        node = node->next;
    }
    while (node) {
        node = node->next;
        head = head->next;
    }
    while (head) {
        sum += head->data;
        head = head->next;
    }
    return sum;
}

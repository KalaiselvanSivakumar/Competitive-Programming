/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    while (head) {
        if (head->next && head->next->next) {
            struct Node *temp = head->next;
            head->next = head->next->next;
            free(temp);
        }
        else {
            head->next = NULL;
        }
        head = head->next;
    }
}

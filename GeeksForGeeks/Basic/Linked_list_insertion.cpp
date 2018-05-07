/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
    struct node *head = *headRef;
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = newData;
    if (head == NULL) {
        head = temp;
    }
    else {
        temp->next = head;
        head = temp;
    }
    *headRef = head;
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    struct node *head = *headRef;
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = newData;
    if (head == NULL) {
        head = temp;
    }
    else {
        struct node *t = head;
        while(t->next) {
            t = t->next;
        }
        t->next = temp;
    }
    *headRef = head;
}
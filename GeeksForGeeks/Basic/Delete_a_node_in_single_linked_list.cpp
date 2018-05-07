/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    struct Node *t1 = head;
    struct Node *t2 = t1;
    --x;
    while (x && t1->next) {
        --x;
        t2 = t1;
        t1 = t1->next;
    }
    if (t1 == head) {
        t1 = t1->next;
        head->next = NULL;
        free(head);
        return t1;
    }

    if (t1->next) {
        t2->next = t1->next;
        t1->next = NULL;
    }
    else {
        t2->next = NULL;
    }
    free(t1);
    return head;
}

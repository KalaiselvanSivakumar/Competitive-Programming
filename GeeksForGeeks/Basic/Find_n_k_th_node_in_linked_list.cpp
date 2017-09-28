/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the node is
struct node
{
    int data;
    struct node *next;
};*/
int fractional_node(struct node *head, int k)
{
    int length = 0;
    struct node *temp = head;
    while (temp) {
        length++;
        temp = temp->next;
    }
    k = ceil(length/float (k));
    --k;
    while (head && k) {
        --k;
        head = head->next;
    }
    if (head) {
        return head->data;
    }
    return 0;
}
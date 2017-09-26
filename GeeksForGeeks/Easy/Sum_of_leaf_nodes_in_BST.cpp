/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */
/*You are required to complete below method */
int sumOfLeafNodes(Node *r ){
     /*Your code here */
     if (r == NULL) {
         return 0;
     }
     else if (r->left == NULL && r->right == NULL) {
         return r->data;
     }
     int sum = 0;
     sum += sumOfLeafNodes(r->left);
     sum += sumOfLeafNodes(r->right);
     return sum;
}

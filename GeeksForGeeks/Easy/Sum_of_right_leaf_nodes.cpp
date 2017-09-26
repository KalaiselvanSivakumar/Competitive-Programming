/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// right leaf nodes
int rightLeafSum(Node* root)
{
    //Code here
    int sum = 0;
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return root->data;
    }
    sum += rightLeafSum(root->right);
    if (root->left != NULL && !(root->left->left == NULL && root->left->right == NULL)) {
        sum += rightLeafSum(root->left);
    }
    return sum;
}

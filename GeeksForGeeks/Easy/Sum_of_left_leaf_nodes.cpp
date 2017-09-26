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
// left leaf nodes
int leftLeafSum(Node* root)
{
    // Code here
    int sum = 0;
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return root->data;
    }
    sum += leftLeafSum(root->left);
    if (root->right != NULL && !(root->right->left == NULL && root->right->right == NULL)) {
        sum += leftLeafSum(root->right);
    }
    return sum;
}

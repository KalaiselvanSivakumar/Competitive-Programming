/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node *root)
{
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL) {
		return 0;
	}
	return max(height(root->left), height(root->right)) + 1;
}
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

Node *lca(Node *root, int v1, int v2) {
	if (root == NULL) {
		return NULL;
	}
	int data = root->data;
	if (v1 > v2) {
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}
	if (data >= v1 && data <= v2) {
		return root;
	}
	else if (data < v2) {
		return lca(root->left, v1, v2);
	}
	else {
		return lca(root->right, v1, v2);
	}
}
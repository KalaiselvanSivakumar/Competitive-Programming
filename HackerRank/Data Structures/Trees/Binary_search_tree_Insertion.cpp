/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

Node *insert(Node *root, int data)
{
	Node *temp = new Node(data);
	if (root == NULL) {
		root = temp;
	}
	else {
		Node *ptr = root;
		while (ptr != NULL) {
			if (data < ptr->data) {
				if (ptr->left == NULL) {
					ptr->left = temp;
					break;
				}
				ptr = ptr->left;
			}
			else if (data > ptr->data) {
				if (ptr->right == NULL) {
					ptr->right = temp;
					break;
				}
				ptr = ptr->right;
			}
		}
	}
	return root;
}
/*
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

void levelOrder(Node *root)
{
	if (root == NULL) {
		return;
	}
	queue<Node *> level_order_queue;
	level_order_queue.push(root);
	while (!level_order_queue.empty()) {
		Node *temp = level_order_queue.front();
		level_order_queue.pop();

		cout << temp->data << ' ';
		if (temp->left) {
			level_order_queue.push(temp->left);
		}
		if (temp->right) {
			level_order_queue.push(temp->right);
		}

		free(temp);
	}
}
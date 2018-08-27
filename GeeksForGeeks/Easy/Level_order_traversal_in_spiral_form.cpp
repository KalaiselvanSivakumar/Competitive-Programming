/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// A binary tree node has data, pointer to left child
// and a pointer to right child  
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
void printSpiral(Node *root)
{
	if (root == NULL) {
		return;
	}
	stack<Node *> odd_stack;
	stack<Node *> even_stack;
	even_stack.push(root);
	while (!odd_stack.empty() || !even_stack.empty()) {
		while (!even_stack.empty()) {
			Node *temp = even_stack.top();
			even_stack.pop();
			cout << temp->data << ' ';
			if (temp->right) {
				odd_stack.push(temp->right);
			}
			if (temp->left) {
				odd_stack.push(temp->left);
			}
			free(temp);
		}
		while (!odd_stack.empty()) {
			Node *temp = odd_stack.top();
			odd_stack.pop();
			cout << temp->data << ' ';
			if (temp->left) {
				even_stack.push(temp->left);
			}
			if (temp->right) {
				even_stack.push(temp->right);
			}
			free(temp);
		}
	}
}
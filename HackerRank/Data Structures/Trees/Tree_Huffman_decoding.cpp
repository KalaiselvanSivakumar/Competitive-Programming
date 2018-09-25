/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/

void decode_huff(node * root, string s) {
	string output = "";
	node *temp = root;
	int i;

	string::iterator itr = s.begin();
	while (itr != s.end()) {
		i = *itr - '0';

		if (i == 0) {
			temp = temp->left;
		}
		else {
			temp = temp->right;
		}
		if (temp->data) {
			output += temp->data;
			temp = root;
		}
		// cout << i << " " << temp->data << " " << output << '\n';

		++itr;
	}
	cout << output;
}
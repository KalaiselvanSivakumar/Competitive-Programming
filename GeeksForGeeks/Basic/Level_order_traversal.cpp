/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* node)
{
    queue<Node *> bfsQueue;
    bfsQueue.push(node);

    while(!bfsQueue.empty()) {
        Node* temp = bfsQueue.front();
        cout << temp->data << " ";
        bfsQueue.pop();
        if (temp->left) {
            bfsQueue.push(temp->left);
        }
        if (temp->right) {
            bfsQueue.push(temp->right);
        }
    }
}

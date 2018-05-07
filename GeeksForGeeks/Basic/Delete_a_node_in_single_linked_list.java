/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Linklist node structure
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}*/
/*You are required to complete below method*/
class GfG
{
    Node deleteNode(Node head, int x)
    {
        Node t1 = head;
        Node t2 = t1;
        --x;
        while (x != 0) {
            --x;
            t2 = t1;
            t1 = t1.next;
        }

        if (t1 == head) {
            t1 = t1.next;
            head.next = null;
            return t1;
        }

        if (t1.next != null) {
            t2.next = t1.next;
            t1.next = null;
        }
        else {
            t2.next = null;
        }
        return head;
    }
}
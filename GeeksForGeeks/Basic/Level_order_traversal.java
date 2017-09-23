/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


class GfG
{
    void levelOrder(Node node)
    {
        Queue<Node> bfsQueue = new LinkedList<Node>();
        bfsQueue.add(node);

        while (!bfsQueue.isEmpty()) {
            Node temp = bfsQueue.remove();
            System.out.print(temp.data + " ");
            if (temp.left != null) {
                bfsQueue.add(temp.left);
            }
            if (temp.right != null) {
                bfsQueue.add(temp.right);
            }
        }
    }
}

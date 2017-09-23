#Python 3

'''Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.'''


"""
class Node:
    def __init__(self, value):
        self.left = None
        self.data = value
        self.right = None
"""
# Your task is to complete this function
# Function should print the level order of the tree in required format
# only input to function is the root of the tree
def traverse_level_order( root ):
    bfs_queue = []
    bfs_queue.append(root)

    while len(bfs_queue):
        temp = bfs_queue.pop(0)
        print (temp.data,end=" ")
        if temp.left:
            bfs_queue.append(temp.left)
        if temp.right:
            bfs_queue.append(temp.right)

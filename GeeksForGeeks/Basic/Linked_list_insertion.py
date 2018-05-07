''' Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above. '''

# your task is to complete these function
# function should return head of the list
'''    
class node:
    def __init__(self, val):
        self.data = coeff
        self.next = None
'''
# function should insert new node at the
# beigning of the list
def insertAtBeginning(head, data):
    temp = node(data)
    if head:
        temp.next = head
    return temp

# function should insert new node at the
# end of the list
def insertAtEnd(head, data):
    temp = node(data)
    if head == None:
        return temp
    else:
        t = head
        while t.next:
            t = t.next
        t.next = temp
        return head

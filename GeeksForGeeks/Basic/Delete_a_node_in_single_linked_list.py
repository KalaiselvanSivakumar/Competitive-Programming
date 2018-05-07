
''' Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above. '''

# your task is to complete this function
# function should return new head pointer
def delNode(head, k):
    t1 = head
    t2 = None
    k -= 1
    while k and t1.next:
        t2 = t1
        t1 = t1.next
        k -= 1
    if t1 == head:
        return head.next
    if t1.next:
        t2.next = t1.next
    else:
        t2.next = None
    return head

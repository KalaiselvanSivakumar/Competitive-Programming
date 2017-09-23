#Python 3

'''Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.'''


# your task is to complete this function
# function should return true/1 if length is even
# else return false/0
def isLengthEvenOrOdd(head):
    counter = 0
    while head:
        counter += 1
        head = head.next
    return 0 if counter % 2 else 1

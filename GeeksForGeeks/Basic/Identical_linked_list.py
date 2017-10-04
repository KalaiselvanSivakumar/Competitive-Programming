'''Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.'''


# your task is to complete this function
# function should return true/1 if both
# are identical else return false/0
def areIdentical(head1, head2):
    # Code here
    while head1 and head2:
        if head1.data != head2.data:
            return False
        head1 = head1.next
        head2 = head2.next
    if not head1 and not head2:
        return True
    else:
        return False

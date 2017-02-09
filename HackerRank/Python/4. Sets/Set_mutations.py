#Python 3

set_size = int(input())
A = set([int(x) for x in input().split()])
N = int(input())
for i in range(N):
    operation = input().split()
    B = set([int(x) for x in input().split()])
    if operation[0] == "intersection_update":
        A.intersection_update(B)
        #A &= B
    elif operation[0] == "update":
        A.update(B)
        #A |= B
    elif operation[0] == "symmetric_difference_update":
        A.symmetric_difference_update(B)
        #A ^= B
    else:
        A.difference_update(B)
        #A -= B
print (sum(A))

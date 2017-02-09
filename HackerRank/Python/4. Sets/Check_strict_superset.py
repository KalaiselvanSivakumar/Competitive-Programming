A = set([int(x) for x in input().split()])
N = int(input())
for i in range(N):
    B = set([int(x) for x in input().split()])
    if not (B-A == set() and A-B != set()):
        print (False)
        break
else:
    print (True)

#!/bin/python3

n = int(input().strip())
A = [int(A_temp) for A_temp in input().strip().split(' ')]

minimum = 10000;
for i in range(0, n):
    for j in range(i + 1, n):
        if (A[i] == A[j]):
            minimum = min(minimum, abs(i - j))

if minimum != 10000:
    print (minimum)
else:
    print (-1)

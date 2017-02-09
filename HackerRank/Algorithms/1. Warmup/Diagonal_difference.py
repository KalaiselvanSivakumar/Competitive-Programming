#!/bin/python3

n = int(input().strip())
a = []
for a_i in range(n):
    a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
    a.append(a_t)
left = 0
right = 0
i = 0
while i < n:
    left += a[i][i]
    right += a[i][n-1-i]
    i += 1
print (abs(left-right))

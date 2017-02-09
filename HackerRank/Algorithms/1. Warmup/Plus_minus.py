#!/bin/python3

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

positive = 0
negative = 0
zero = 0

for i in arr:
    if i > 0:
        positive += 1
    elif i < 0:
        negative += 1
    else:
        zero += 1

print (round(positive/n, 6))
print (round(negative/n, 6))
print (round(zero/n, 6))

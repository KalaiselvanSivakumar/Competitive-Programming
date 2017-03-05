#!/bin/python3

n = int(input().strip())
B = input().strip()
i = 0
step_count = 0
while i < n:
    if B[i:i+3] == "010":
        step_count += 1
        i += 3
    else:
        i += 1
print (step_count)

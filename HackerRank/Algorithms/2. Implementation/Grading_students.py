#!/bin/python3

n = int(input().strip())
for a0 in range(n):
    grade = int(input().strip())
    # your code goes here
    if grade < 38:
        print (grade)
    else:
        if (grade % 5) > 2:
            grade = ((grade + 2) // 5) * 5
        print (grade)

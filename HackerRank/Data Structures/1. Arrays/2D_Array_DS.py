#!/bin/python3

#Python 3

import sys


arr = []
for arr_i in range(6):
   arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
   arr.append(arr_t)

#Solution
max_sum = -65
for i in range(0, 4):
    for j in range(0, 4):
        temp_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] \
                        + arr[i+1][j+1] \
                        + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
        if temp_sum > max_sum:
            max_sum = temp_sum
print (max_sum)

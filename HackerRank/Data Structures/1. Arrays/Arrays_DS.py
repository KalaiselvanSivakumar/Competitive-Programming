#!/bin/python3

#Python 3

import sys

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

#Solution
arr_i = n-1
while arr_i >= 0:
    print (arr[arr_i], end=" ")
    arr_i -= 1

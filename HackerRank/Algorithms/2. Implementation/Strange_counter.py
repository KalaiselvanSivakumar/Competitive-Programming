#!/bin/python3

import sys


t = int(input().strip())
n = 3
cycle_count = 3

while t:
    if t <= cycle_count:
        n -= t - 1
        break
    else:
        n = n * 2
        t -= cycle_count
        cycle_count *= 2
print (n)

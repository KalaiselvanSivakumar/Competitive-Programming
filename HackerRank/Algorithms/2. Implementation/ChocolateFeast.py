#!/bin/python3

import sys

def chocolateFeast(n, c, m):
    # Complete this function
    noOfWrappers = n // c
    totalChocolates = noOfWrappers
    while noOfWrappers >= m:
        totalChocolates += noOfWrappers // m
        noOfWrappers = noOfWrappers - (noOfWrappers // m) * m + (noOfWrappers // m)
    return totalChocolates

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n, c, m = input().strip().split(' ')
        n, c, m = [int(n), int(c), int(m)]
        result = chocolateFeast(n, c, m)
        print(result)

#!/bin/python3

n = int(input().strip())
height = [int(height_temp) for height_temp in input().strip().split(' ')]

maximum = max(height)
print (height.count(maximum))

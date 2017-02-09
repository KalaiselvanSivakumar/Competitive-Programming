#!/bin/python3

n = int(input().strip())
string = ' '*n
for i in range(n):
    string = string[1:] + '#'
    print (string)

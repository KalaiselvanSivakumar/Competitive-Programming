#!/bin/python3

h = list(map(int, input().strip().split(' ')))
word = input().strip()

height = 0
for i in word:
    height = height if h[ord(i)-97] <= height else h[ord(i)-97]
print (height*len(word))

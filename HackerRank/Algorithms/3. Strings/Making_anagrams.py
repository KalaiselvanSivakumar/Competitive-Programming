#!/bin/python3

import math

def makingAnagrams(s1, s2):
    # Complete this function
    charCountStr1 = [0] * 26
    charCountStr2 = [0] * 26
    i = 0
    strLength = len(s1)
    while i < strLength:
        charCountStr1[ord(s1[i]) - 97] += 1
        i += 1
    i = 0
    strLength = len(s2)
    while i < strLength:
        charCountStr2[ord(s2[i]) - 97] += 1
        i += 1
    charDeletionsNeeded = 0
    i = 0
    while i < 26:
        charDeletionsNeeded += math.fabs(charCountStr1[i] - charCountStr2[i])
        i += 1
    return int(charDeletionsNeeded)

s1 = input().strip()
s2 = input().strip()
result = makingAnagrams(s1, s2)
print(result)

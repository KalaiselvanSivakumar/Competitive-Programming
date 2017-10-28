#!/bin/python3

# Python 3

def twoStrings(s1, s2):
    # Complete this function
    s1Alphabets = [False] * 26
    s2Alphabets = [False] * 26
    s1Len = len(s1)
    s2Len = len(s2)
    i = 0
    j = 0
    while i < s1Len and j < s2Len:
        s1Alphabets[ord(s1[i]) - 97] = True
        s2Alphabets[ord(s2[j]) - 97] = True
        if s2Alphabets[ord(s1[i]) - 97] or s1Alphabets[ord(s2[i]) -97]:
            return "YES"
        i += 1
        j += 1
    while i < s1Len:
        s1Alphabets[ord(s1[i]) - 97] = True
        if s2Alphabets[ord(s1[i]) - 97]:
            return "YES"
        i += 1
    while j < s2Len:
        s2Alphabets[ord(s2[j]) - 97] = True
        if s1Alphabets[ord(s2[i]) -97]:
            return "YES"
        j += 1
    return "NO"

q = int(input().strip())
for a0 in range(q):
    s1 = input().strip()
    s2 = input().strip()
    result = twoStrings(s1, s2)
    print(result)

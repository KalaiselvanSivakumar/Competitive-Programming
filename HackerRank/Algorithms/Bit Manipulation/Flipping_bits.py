#Python3

import ctypes

test_case = int(input())
while (test_case):
    number = int(input())
    number = ~number
    print (ctypes.c_uint32(number).value)
    test_case -= 1

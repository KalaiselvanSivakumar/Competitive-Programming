#!/bin/python3

import sys


h = int(input().strip())
m = int(input().strip())

time = {
    0: "o' clock",
    1: "one",
    2: "two",
    3: "three",
    4: "four",
    5: "five",
    6: "six",
    7: "seven",
    8: "eight",
    9: "nine",
    10: "ten",
    11: "eleven",
    12: "twelve",
    13: "thirteen",
    14: "fourteen",
    15: "quarter",
    16: "sixteen",
    17: "seventeen",
    18: "eighteen",
    19: "nineteen",
    20: "twenty",
    21: "twenty one",
    22: "twenty two",
    23: "twenty three",
    24: "twenty four",
    25: "twenty five",
    26: "twenty six",
    27: "twenty seven",
    28: "twenty eight",
    29: "twenty nine",
    30: "half"
}

if m == 0:
    print (time[h], time[0])
elif m <= 30:
    middleWord = "past" if m == 15 or m == 30 else "minutes past"
    print (time[m], middleWord, time[h])
else:
    if h == 12:
        h = 1
    else:
        h = h + 1
    middleWord = "to" if m == 45 else "minutes to"
    print (time[60 - m], middleWord, time[h])

#!/bin/python3

time = input().strip()
if time[8] == 'A':
    if time[0:2] == "12":
        time = "00" + time[2:-2]
    else:
        time = time[:-2]
else:
    if time[0:2] == "12":
        time = time[:-2]
    else:
        time = str(int(time[0:2]) + 12) + time[2:-2]
print (time)

#Python 2.7

import math

def find_distance(a, n, s):
    distance = 0
    point = [0, 0]
    for i in range(len(a)):
        distance += a[i]
        if s[i] == 'N':
            point[1] += a[i]
        elif s[i] == 'S':
            point[1] -= a[i]
        elif s[i] == 'E':
            point[0] += a[i]
        else:
            point[0] -= a[i]
    return distance + int (math.ceil(math.sqrt(point[0]**2 + point[1]**2)))

if __name__ == '__main__':
    test_case = input()
    while test_case:
        m = input()
        arr = [int(x) for x in raw_input().split()]
        direction = raw_input()
        print find_distance(arr, m, direction)
        test_case -= 1

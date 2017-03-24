#Python 3

value = int(input())
size = int(input())
arr = [int(x) for x in input().split()]

l = 0
r = size - 1
while (l <= r):
    mid = (l + r) // 2;
    if (arr[mid] == value):
        print (mid)
        break
    elif (arr[mid] < value):
        l = mid + 1
    else:
        r = mid - 1
else:
    print (-1)

#Python 3

n = int(input())
arr = [int(x) for x in input().split(' ')]

count_arr = [0] * 100

for x in arr:
    count_arr[x - 1] += 1

print (n - max(count_arr))

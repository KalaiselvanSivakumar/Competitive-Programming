#Python

if __name__ == '__main__':
    n = int(input())
    arr = [int(x) for x in input().split()]
    for i in range(0, n-1):
        for j in range(i+1, n):
            if arr[i] < arr[j]:
                arr[i] ^= arr[j]
                arr[j] ^= arr[i]
                arr[i] ^= arr[j]
    temp = arr[0]
    for i in range(0, n):
        if temp > arr[i]:
            temp = arr[i]
            break
    print (temp)

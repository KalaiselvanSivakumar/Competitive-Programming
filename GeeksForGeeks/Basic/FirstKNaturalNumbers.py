#Python3

test_case = int(input())
while test_case:
    n, k = [int(x) for x in input().split()]
    arr = [int(x) for x in input().split()]
    arr.sort()
    currentNaturalNumber = 1
    i = 0
    while k and i < n:
        if arr[i] < currentNaturalNumber:
            i += 1
        elif arr[i] == currentNaturalNumber:
            i += 1
            currentNaturalNumber += 1
        else:
            print (currentNaturalNumber, end = ' ')
            currentNaturalNumber += 1
            k -= 1
    while k:
        print (currentNaturalNumber, end = ' ')
        currentNaturalNumber += 1
        k -= 1
    print ('\n', end='')
    test_case -= 1

if __name__ == '__main__':
    size = int(input())
    arr = [int(x) for x in input().split()]
    total_swaps = 0
    for i in range(size):
        number_of_swaps = 0
        for j in range(size - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                number_of_swaps += 1
                total_swaps += 1
        if number_of_swaps == 0:
            break
    print ("Array is sorted in", total_swaps, "swaps.")
    print ("First Element:", arr[0])
    print ("Last Element:", arr[size-1])

#Python 2.7

if __name__ == '__main__':
    test_case = input()
    while test_case:
        size = input()
        arr = [int(x) for x in raw_input().split()]
        count = 1
        maximum = arr[0]
        for i in arr:
            if i > maximum:
                maximum = i
                count += 1
        print count
        test_case -= 1

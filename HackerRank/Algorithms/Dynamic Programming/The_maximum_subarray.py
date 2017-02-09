#Python 3

def find_maximum_sub_array(a):
    max_contiguous = a[0]
    max_non_contiguous = a[0]
    max_till_here = a[0]
    for i in range(1, len(a)):
        max_till_here      = max(a[i], max_till_here + a[i])
        max_contiguous     = max(max_till_here, max_contiguous)
        max_non_contiguous = max(max(max_non_contiguous, a[i]), max_non_contiguous + a[i])
    print (max_contiguous, max_non_contiguous)

if __name__ == '__main__':
    test_case = int(input())
    while test_case:
        size = int(input())
        arr = [int(x) for x in input().split()]
        find_maximum_sub_array(arr)
        test_case -= 1

#Python 2.7

if __name__ == '__main__':
    test_case = input()
    while test_case:
        n, result = [int(x) for x in raw_input().split()]
        if n * (n+1) //2 == result:
            print "1"
        else:
            print "0"
        test_case -= 1

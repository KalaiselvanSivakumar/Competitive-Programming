#Python 3

if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    t = tuple(integer_list)
    #Below statement adds tuple(3) to previous tuple t
    #t += 3,
    print (hash(t))

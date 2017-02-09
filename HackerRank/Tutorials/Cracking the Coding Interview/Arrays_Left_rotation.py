#Python 3

def array_left_rotation(a, n, k):
    return a[k:] + a[:k] #Solution line. Remaining lines are provided code stub


n, k = map(int, input().strip().split(' '))
a = list(map(int, input().strip().split(' ')))
answer = array_left_rotation(a, n, k);
print(*answer, sep=' ')

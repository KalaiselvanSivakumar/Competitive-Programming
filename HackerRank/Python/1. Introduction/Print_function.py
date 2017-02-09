#Python 3

import sys

if __name__ == '__main__':
    n = int(input())
    values = range(1, n+1)
    print(*values, sep='', end='\n', file=sys.stdout)

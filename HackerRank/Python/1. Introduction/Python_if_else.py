#Python 3

if __name__ == '__main__':
    n = int(input())
    if n%2 == 1 or (n>5 and n<21):
        print ('Weird')
    else:
        print ('Not Weird')

#Python 3

#Solution
def print_rangoli(size):
    s = "-"
    temp =[]
    for i in range(0, size-1):
        s = s[:(len(s)//2)+2] + chr(96+(size-i)) + s[(len(s)//2)-1:]
        temp.append(s.center(size*4-3, "-"))
        print (temp[len(temp)-1])
    s = s[:(len(s)//2)+2] + "a" + s[(len(s)//2)-1:]
    print (s[1:-1])
    for i in range(0, size-1):
        print (temp[len(temp)-1])
        temp.pop()

#Stub provided
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)

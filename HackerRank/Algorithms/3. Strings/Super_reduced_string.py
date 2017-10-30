#Python 3

s = input()
flag = True
while flag:
    flag = False
    length = len(s)
    i = 1;
    while (i < length):
        if (s[i] == s[i-1]):
            s = s[ : i-1] + s[i+1 : ]
            length -= 2
            flag = True
        else:
            i += 1
print (s if len(s) != 0 else "Empty String")

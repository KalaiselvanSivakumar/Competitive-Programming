#Python 3

if __name__ == '__main__':
    s = input()
    alpha_numeric = False
    alphabetical  = False
    digits        = False
    lower_case    = False
    upper_case    = False
    i = 0
    while i < len(s):
        if (not lower_case) and \
            (s[i] >= 'a' and s[i] <= 'z'):
            lower_case    = True
            alphabetical  = True
            alpha_numeric = True
        elif (not upper_case) and \
            (s[i] >= 'A' and s[i] <= 'Z'):
            upper_case    = True
            alphabetical  = True
            alpha_numeric = True
        elif (not digits) and \
            (s[i] >= '0' and s[i] <= '9'):
            digits        = True
            alpha_numeric = True
        i += 1
    print (alpha_numeric)
    print (alphabetical)
    print (digits)
    print (lower_case)
    print (upper_case)

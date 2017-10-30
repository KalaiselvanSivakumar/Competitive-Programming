#Python 3

if __name__ == '__main__':
    test_case = int(input())
    while test_case:
        string = input()
        i = 0
        j = len(string) - 1
        while i <= j:
            if abs(ord(string[i]) - ord(string[i+1])) != \
                abs(ord(string[j]) - ord(string[j-1])):
                print ("Not Funny")
                break
            i += 1
            j -= 1
        else:
            print ("Funny")
        test_case -= 1

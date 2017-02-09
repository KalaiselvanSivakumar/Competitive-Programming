#Python 3

if __name__ == '__main__':
    test_case = int(input())
    while test_case:
        s = input()
        delete_characters_count = 0
        i = 1
        j = 0
        while i < len(s):
            if s[i] == s[j]:
                delete_characters_count += 1
                i += 1
            else:
                j = i
                i += 1
        print (delete_characters_count)
        test_case -= 1

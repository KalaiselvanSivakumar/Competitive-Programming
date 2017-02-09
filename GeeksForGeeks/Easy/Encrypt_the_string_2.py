#Python 2.7

if __name__ == '__main__':
    test_case = input()
    while test_case:
        string = raw_input().strip()
        test_character = string[0]
        test_count = 1
        result = ""
        for i in range(1, len(string)):
            if string[i] == test_character:
                test_count += 1
            else:
                result += test_character + hex(test_count)[2:]
                test_character = string[i]
                test_count = 1
        result += test_character + hex(test_count)[2:]
        print (''.join(reversed(result)))
        test_case -= 1

#Python 2.7

if __name__ == '__main__':
    test_case = input()
    while test_case:
        string = raw_input().strip()
        run_length_string    = ""
        if string != "":
            test_character       = string[0]
            test_character_count = 1
            for i in range(1, len(string)):
                if string[i] == test_character:
                    test_character_count += 1
                else:
                    run_length_string += test_character + str(test_character_count)
                    test_character = string[i]
                    test_character_count = 1
            run_length_string += test_character + str(test_character_count)
            run_length_string = ''.join(reversed(run_length_string))
        print (run_length_string)
        test_case -= 1

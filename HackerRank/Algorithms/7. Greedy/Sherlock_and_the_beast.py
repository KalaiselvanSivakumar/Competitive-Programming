#Python 3

test_case = int(input())
while test_case:
    n = int(input())
    number_of_5 = (n // 3)
    if (number_of_5 < 1):
        print (-1)
    else:
        number_of_3 = n % 3
        if (number_of_3 == 2):
            number_of_5 -= 1
            number_of_3 += 3
        elif (number_of_3 == 1):
            number_of_5 -= 3
            number_of_3 += 9

        if (number_of_5 < 0):
            print (-1)
        else:
            result = ("5" * (number_of_5 * 3)) + ("3" * number_of_3)
            print (result)
    test_case -= 1

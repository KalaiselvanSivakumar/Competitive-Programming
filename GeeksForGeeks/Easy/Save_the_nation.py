#Python 2.7

import math

if __name__ == '__main__':
    test_case = input()
    while test_case:
        s = raw_input().strip()
        length = len(s)
        floor_value = math.floor(math.sqrt(length))
        ceil_value = math.ceil(math.sqrt(length))
        row = 0
        column = 0
        if floor_value * floor_value >= length:
            row = floor_value
            column = floor_value
        elif floor_value * ceil_value >= length:
            row = floor_value
            column = ceil_value
        else:
            row = ceil_value
            column = ceil_value
        row = int (row)
        column = int (column)
        encrypt_matrix = []
        for i in range(row):
            temp = []
            for j in range(column):
                temp.append(' ')
            encrypt_matrix.append(temp)
        k = 0
        for i in range(0, row):
            for j in range(0, column):
                if k < length:
                    encrypt_matrix[i][j] = s[k]
                    k += 1
                else:
                    break
        result = ""
        for i in range(column):
            for j in range(row):
                if encrypt_matrix[j][i] != ' ':
                    result += encrypt_matrix[j][i]
            result += " "
        print result
        test_case -= 1

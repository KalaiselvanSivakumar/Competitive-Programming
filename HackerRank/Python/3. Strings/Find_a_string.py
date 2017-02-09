#Python 3

#Solution
def count_substring(string, sub_string):
    count = 0
    for i in range(0, len(string)-len(sub_string)+1):
        j = 0
        while j < len(sub_string):
            if string[i+j] != sub_string[j]:
                break
            j = j + 1
        if j == len(sub_string):
            count += 1
    return count

#Stub provided
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)

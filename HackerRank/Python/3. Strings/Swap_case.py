#Python 3

#Solution
def swap_case(s):
    result = ""
    for i in range(0, len(s)):
        value = ord(s[i])
        if value >= 65 and value <= 90:
            result += chr(value + 32)
        elif value >= 97 and value <= 122:
            result += chr(value - 32)
        else:
            result += s[i]
    return result

#Stub provided
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

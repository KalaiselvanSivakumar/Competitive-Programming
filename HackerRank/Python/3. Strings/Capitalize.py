#Python 3

#Solution
def capitalize(string):
    result = ""
    for i in range(0, len(string)):
        if i == 0 or string[i-1] == ' ':
            if string[i] >= 'a' and string[i] <= 'z':
                result += chr(ord(string[i])-32)
            else:
                result += string[i]
        else:
            result += string[i]
    return result
    '''Single line solution '''
    #return ' '.join(word.capitalize() for word in string.split(' '))

#Stub provided
if __name__ == '__main__':
    string = input()
    capitalized_string = capitalize(string)
    print(capitalized_string)

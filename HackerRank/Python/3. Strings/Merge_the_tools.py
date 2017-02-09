#Python 3

#Solution
def merge_the_tools(string, k):
    length = len(string)
    string_list = [string[(i*k):(i*k)+k] for i in range(0,length//k)]
    for s in string_list:
        check = set()
        result = ""
        for i in range(0, k):
            if s[i] not in check:
                check.add(s[i])
                result += s[i]
        print (result)

#Stub provided
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)

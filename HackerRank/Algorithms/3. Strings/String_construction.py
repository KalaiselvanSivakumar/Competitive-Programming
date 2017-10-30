#Python3

def stringConstruction(s):
    characters = [False] * 26
    i = 0
    copy_cost = 0
    length = len(s)
    while (i < length):
        index = ord(s[i]) - ord('a')
        if (not characters[index]):
            characters[index] = True
            copy_cost += 1
        i += 1
    return copy_cost

q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    result = stringConstruction(s)
    print(result)

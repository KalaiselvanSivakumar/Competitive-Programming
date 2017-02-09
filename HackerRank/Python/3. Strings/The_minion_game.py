#Python 3

#Solution
def minion_game(string):
    vowels = {'A', 'E', 'I', 'O', 'U'}
    kevin  = 0
    stuart = 0
    length = len(string)
    for i in range(0, length):
        if string[i] in vowels:
            kevin  += length-i
        else:
            stuart += length-i
    if kevin > stuart:
        print ("Kevin", kevin)
    elif stuart > kevin:
        print ("Stuart", stuart)
    else:
        print ("Draw")

#Stub provided
if __name__ == '__main__':
    s = input()
    minion_game(s)

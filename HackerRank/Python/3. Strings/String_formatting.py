#Python 3

#Solution
def print_formatted(number):
    for i in range(1, number+1):
        print (str(i).rjust(len(str(bin(number))[2:])), \
               str(oct(i))[2:].rjust(len(str(bin(number))[2:])), \
               str(hex(i))[2:].upper().rjust(len(str(bin(number))[2:])), \
               str(bin(i))[2:].rjust(len(str(bin(number))[2:])))

#Stub provided
if __name__ == '__main__':
    n = int(input())
    print_formatted(n)

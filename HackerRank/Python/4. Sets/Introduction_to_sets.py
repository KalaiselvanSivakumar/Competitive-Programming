#Python 3

#Solution
def average(array):
    set_values = set(array)
    return sum(set_values)/len(set_values)

#Stub provided
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)

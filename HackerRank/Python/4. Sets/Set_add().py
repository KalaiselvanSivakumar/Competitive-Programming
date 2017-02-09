#Python 3

size = int(input())
stamps_distinct = set()
for i in range(size):
    stamps_distinct.add(input())
print (len(stamps_distinct))

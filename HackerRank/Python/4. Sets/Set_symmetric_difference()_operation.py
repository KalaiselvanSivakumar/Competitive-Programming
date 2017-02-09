#Python 3

english_size = int(input())
english      = set([int(x) for x in input().split()])
french_size  = int(input())
french       = set([int(x) for x in input().split()])

print (len(english ^ french))
# print (len(english.symmetric_difference(french)))

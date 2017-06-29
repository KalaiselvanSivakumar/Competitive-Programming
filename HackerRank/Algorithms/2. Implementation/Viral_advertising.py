#Python 3
n = int(input())
peopleLiked = 5 // 2
totalPeopleLiked = peopleLiked
while (n > 1):
    peopleLiked = (peopleLiked * 3) // 2
    n -= 1
    totalPeopleLiked += peopleLiked
print (totalPeopleLiked)

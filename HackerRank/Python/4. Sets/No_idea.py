#Python 3

n_size, m_size = [int(x) for x in input().split()]
arr = [int(x) for x in input().split()]
set_a = set([int(x) for x in input().split()])
set_b = set([int(x) for x in input().split()])

happiness = 0

for x in arr:
    if x in set_a:
        happiness += 1
    elif x in set_b:
        happiness -= 1

print (happiness)

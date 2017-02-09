#Python 3

m_size = int(input())
m_arr  = set([int(x) for x in input().split()])
n_size = int(input())
n_arr  = set([int(x) for x in input().split()])

result = sorted((m_arr.difference(n_arr)).union(n_arr.difference(m_arr)))
print (*result, sep='\n')

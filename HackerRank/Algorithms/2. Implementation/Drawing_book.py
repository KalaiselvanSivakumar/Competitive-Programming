#!/bin/python3

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
	last_page = n if (n % 2) == 1 else (n + 1)
	from_first_page = p // 2
	from_last_page = (last_page - p) // 2
	# print (last_page, from_first_page, from_last_page)
	return from_first_page if from_first_page < from_last_page else from_last_page

if __name__ == '__main__':
	fptr = open(os.environ['OUTPUT_PATH'], 'w')
	n = int(input())
	p = int(input())
	result = pageCount(n, p)
	fptr.write(str(result) + '\n')
	fptr.close()

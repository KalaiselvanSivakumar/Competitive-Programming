#Python 2
#Python 3 is not allowed for this problem


import math
AB = int(raw_input())
BC = int(raw_input())
print str(int(round(math.degrees(math.atan2(AB,BC)))))+'°'

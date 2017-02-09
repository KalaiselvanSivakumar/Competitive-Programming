#Python 3

import cmath

input_string = input()
complex_number = complex(input_string)
polar_r = abs(complex_number)
polar_angle = cmath.phase(complex_number)
print (polar_r)
print (polar_angle)

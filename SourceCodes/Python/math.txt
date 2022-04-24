from math import exp, sin

arr = [1,2,3,4,5]
addition = 0
multiplication = 1
subtraction = 15
division = 120

for i in arr:
    addition += i

for i in arr:
    multiplication *= i

for i in arr:
    subtraction -= i

for i in arr:
    division /= i

print(addition)
print(multiplication)
print(subtraction)
print(division)
print(sin(addition))
print(pow(multiplication,multiplication))
print(exp(subtraction))
print(abs(division))
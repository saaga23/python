from math import sqrt
# input the lenghts of two side adjacent to the right angle
a=int(input("Enter the value for a: "))
b=int(input("Enter the value for b: "))
# Solve for the hypothenus of the triangle
hypothenus_square=((a*a) + (b*b))
hypothenus=sqrt(hypothenus_square)
print(hypothenus)
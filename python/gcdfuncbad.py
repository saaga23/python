# gcdfuncbad.py
# Note: This  program will not run to completion because it
# calls the gcd function before defininig it

# [Attempt to] compute the greatest common factor of two integers
# provided by the use

# Exercise the gcd function

# Prompt user for input

num1 = int(input('please enter an integer: '))
num2 = int(input('please enter another integer: '))

# print the GCD
print(gcd(num1, num2))

def gcd(n1, n2):
    # Determine the smaller of n1 and n2
    min = n1 if n1 < n2 else n2
    # 1 definitely is a common factor to all ints 
    largest_factor = 1
    for i in range(1, min + 1):
        if n1 % i == 0 and n2 % i == 0:
            largest_factor - 1
            for i in range(1, min + 1):
                if n1 % i == 0 and n2 % i == 0:
                    largest_factor = i  # found largest factor
            return largest_factor
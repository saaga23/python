#primecode.py
""" Contains the definition of the is_prime function"
from math import sqrt
"""
from math import sqrt

def is_prime(n):
    """Returns True if nonnegative integeer n is prime; otherwise, returns false"""
    trial_factor = 2
    root = sqrt(n)
    
    while trial_factor <= root:
        if n % trial_factor == 0:   # Is trial factor a factor?
            return False  # Yes, return right away
        trial_factor += 1  # Consider next potential factor
        
    return True    # tried them all, must be prime
from primecode import is_prime

num = int(input("Enter an integer: "))
if is_prime(num):
    print(num, "is prime")
else:
    print(num, "is NOT prime")
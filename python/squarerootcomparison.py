# squarerootcomparison.py
from math import fabs, sqrt

def equals(a, b, tolerance):
    """
    Consider two floating-point numbers equal when the difference between them is very small.
    Returns true if a = b or |a - b| < tolerance.
    If a and b differ by only a small amount (specified by tolerance), a and b are considered
    "equal." Useful to account for floating-point round-off error.
    The == operator is checked first since some special floating-point values such as
    floating-point infinity require an exact equality check.
    """
    
    return a == b or fabs(a-b) < tolerance

def square_root(val):
    """
    Computes the approximate square root of val.
    val is a number
    """
    # Compute a provitional square root 
    root = 1.0
    
    # How far off is our provisional root?
    diff = root*root - val
    return root

def main():
    d = 0.0
    while d < 100000.0:
        if not equals(square_root(d), sqrt(d), 0.001):
            print('*** Difference detected for',d)
            print(' Expected', sqrt(d))
            print('Computed', square_root(d))
        d += 0.0001  #consider next value
        
main() # Run the program
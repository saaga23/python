from math import fabs
def equals(a, b, tolerance):
    """
    Returns true if a = b or |a-b| < tolerance.
    if a and b differ by only a small amount (specified by tolerance).a nd b are considered "equal"Useful to account for floating-point round-off error.
    The == operator is checked first sincr some special floating-point values such
    as floating-point infinity require an exact equality check."""
    return a == b or fabs(a-b) < tolerance

def main():
    """Try out the equals function"""
    i = 0.0
    while not equals(i, 1.0, 0.0001):
        print("i =",i)
        i += 0.1
        
        
main()
def derivative(f, h):
    """  Approximates the derivative of funtion f
         given an h value.  The closer his to zero,
         the better the estimate. """
    return lambda x: (f(x + h) - f(x)) / h

def fun(x):     #The funtion we wish to differentiate
    return 3*x**2 + 5

def ans(x):     #The known derivative to function fun
    return 6*x

#  difference: Approximation better as h -> 0
h = 0.0000001

# Compute the function representinng an approximation
# of the derivative of function fun
der = derivative(fun, h)

# Compare the computed derivative to the exact derivative
# DERIVED symbolically
x = 5.0
print('-------------------------------------')
print('                     Approx.   Actual')
print('   x    f(x)     h    f\'(x)   f\'(x)')
print('-------------------------------------')
while x < 5.1:
    print('{:.5f}  {:.5f}  {:.8f}  {:.5f}  {:.5f}'.format(x, fun(x), h, der(x), ans(x)))
    x += 0.01
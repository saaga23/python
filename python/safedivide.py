# safedivide.py
dividend =int(input('Enter dividend:'))
divisor =int(input('Enter divisor:'))
# we want to divide if only the divisor is not zero
#otherwise we would print an error message
if divisor!=0:
    print(dividend/divisor)
else:
    print('Error cannot divide by zero')
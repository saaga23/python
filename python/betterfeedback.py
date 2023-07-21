#Get two integers from the user
dividend=int(input('please enter the number to divide:'))
divisor=int(input('please enter the divisor:'))

#if possible divide them and return the result
if divisor!=0:
    print(dividend,'/',divisor,'=',dividend/divisor)
else: print('Division by zero is not allowed')
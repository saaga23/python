#safedivideconditional.py
#Get the divideend and divisor from the user 
dividend=int(input('please enter integer value of dividend:'))
divisor=int(input('please enter integer value of divisor:'))
#We want to divide only if the divisor is not zero: otherwise
#we will print an ERROR MESSAGE
msg=dividend/divisor if divisor !=0 else print("ERROR, CANNOT BE DIVIDED BY ZERO" )
print(msg)
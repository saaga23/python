# max4a.py
print('please enter four integer values')
num1=int(input('please enter first integer value:'))
num2=int(input('please enter second integer value:'))
num3=int(input('please enter third integer value:'))
num4=int(input('please enter fourth integer value:'))
#Compute the maximum value
if num1 >= num2 and num1 >= num3 and num1 >= num4:
    max = num1
elif num2 >= num1 and num2>= num3 and num2 >= num4:
    max = num2
elif num3 >= num1 and num3 >= num2 and num3 >= num4:
    max = num3
else: #the maximum must be num4
    max=num4
#Report the result
print('The maximum num is',max)
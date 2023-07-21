#request for five integer values
num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))
num3=int(input("Enter third number: "))
num4=int(input("Enter fourth number: "))
num5=int(input('Enter fifth number: '))
max=num1
if num2 >= num1:
    max=num2
if num3 >= num1:
    max=num3
if num4 >= num1:
    max = num4
if num5 >= num1:
    max = num5
min=num1
if num1 >= num2:
    min=num2
if num1 >= num3:
    min=num3
if num1 >= num4:
    min=num4
if num1 >= num5:
    min=num5
print("maximum number is",max,"minimum",min)
def square(a,b):
    num1=pow(a,2)
    num2=pow(b,2)
    num3=(num1 + num2)
    num4=pow(num3,0.5)
    return (num4)
a=int(input("Please enter an integer value:"))
b=int(input("please enter an integer value:"))
num5=square(a,b)
print(num5)
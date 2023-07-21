num1=int(input("Enter first integer value: "))
num2=int(input("Enter second integer value: "))
num3=int(input("Enter third integer value: "))
num4=int(input("Enter fourth integer value: "))
num5=int(input("enter fifth integer value: "))
if num1 == num2 or num3 or num4 or num5:
    print("Duplicate")
elif num2 == num1 or num3 or num4 or num5:
    print("Duplicate")
elif num3 == num1 or num2 or num4 or num5:
    print("duplicate")
elif num4 == num1 or num2 or num3 or num5:
    print("duplicate")
elif num5 == num1 or num2 or num3 or num4:
    print("duplicate")
else:print("All unique")
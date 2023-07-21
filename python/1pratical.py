#sunday aspita abraham
#Bu21csc2006
#computer science pratical 1

#sum of two numbers
tuple=(2,3)
print(sum(tuple))


#a program that accepts an integer an determine if its negative or positive
a=int(input("please enter an integer value: "))
if a < 0:
    print(a,"is a negative integer")
else:
    print(a,"is a positive integer")
    
    
    
#largest of three input numbers
int1=int(input("please enter first integer:"))
int2=int(input("please enter second integer:"))
int3=int(input("please enter third integer:"))
tuple=(int1,int2,int3)
print(max(tuple))


#program to display corresponding day using if and if else statement

for i in range(1,8):
    if i == 1:
        print("monday")
    elif i == 2:
        print("Tuesday")
    elif i == 3:
        print('wednesday')
    elif i == 4:
        print("thursday")
    elif i == 5:
        print("friday")
    elif i == 6:
        print("saturday")
    elif i == 7:
        print("sunday")
    else:
        print("value is not in range or not an integer")
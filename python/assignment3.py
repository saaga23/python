#sunday aspita abraham
#Bu21csc2006
#solution
age=eval(input("please enter your age: "))
if age < 18:
    print("you are not qualified to drive")
else:
    print("You can drive")
    
    
    
    
#leap year
year=int(input("please enter year: "))
if ((year % 400 == 0) or 
(year % 100 != 0) and
(year % 4 == 0)):
    print(year," is a leap year")
else:
    print(year,"is not a leap year")
    
#salary
salary=int(input("please enter your salary: "))
gender=str(input("enter m for male or f for female: "))
if gender == "M" or "m":
    tax= 0.1 * salary
elif gender == "F" or "f":
    tax= 0.05 * salary
else: 
    print("you have entered an invalid input")
print("Tax is",tax)


#psedocode
#if gender = male
#    Tax = o.1 * salary
#else
#  tax 0.05 * salary
#output Tax
#END
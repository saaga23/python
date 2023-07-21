# Write a Python program that requests an integer value from the user.
#If the value is between 1 and 100 inclusive, print ”OK;” otherwise, do not
#print anything.
  
# Request integer
num=int(input("Enter a value from 1 to 100: "))
if 0<num<100:
    print('ok')
else:
    print("Out of range")

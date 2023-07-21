value=int(input("please enter an integer the range of 0....10"))
if value >=0: #first check
    if value <= 10:
       print(value,"in range")
    else:
       print(value,"is too large")
else:
   print(value,"is too  small")
print("Done")
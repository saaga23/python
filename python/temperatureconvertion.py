#prompt user to input degrees in faharanheit.
degreesF=float(input("enter the temperature in degrees faharanheit:"))
#perform the conversion.
degreesC=5/9*(degreesF-32)
#report the result
print(degreesF,"degrees F=",degreesC,"degrees c")
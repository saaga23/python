#faulty tempconverter
#establish some variables
degreesF,degreesC=0,0
#define relationship between f and c
degreesC=5/9*(degreesF-32)
#promp user for degrees f
degreesF=float(input('enter the temperature in degrees faharenhit:'))
print('degree F=',degreesF,'degrees c',degreesC)
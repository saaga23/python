from math import sqrt
def formular(a,b,c):
    temp1=-b + sqrt((b**2)-(4*a*c))
    temp2=-b - sqrt((b**2)-(4*a*c))
    x1=temp1/(2*a)
    x2=temp2/(2*a)
    print(x1,x2)

formular(1,4,2)
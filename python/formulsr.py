from math import sqrt as sq
def almighty(a,b,c):
    temp1=-b + sq((b**2)-(4*a*c))
    temp2=-b - sq((b**2)-(4*a*c))
    x1=temp1/(2*a)
    x1=temp2/(2*a)
    print(x1,x2)

almighty(1,3,4)
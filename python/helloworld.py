import math
def velocity_equ(u,v):
    distance = math.sqrt(pow (u, 2) + pow(v, 2) * 0.5)
    print("The result is ",  distance)
    
u = float(input("Enter u: "))
v = float(input("Enter v: "))

velocity_equ(u ,v)
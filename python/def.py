import math
def velocity(u,v):
    d = math.sqrt(v**2 + u**2 * 1/2)
    print(d)
    
    
    
u=float(input("Enter u:"))
v=float(input("Enter v:"))
velocity(u,v)
    
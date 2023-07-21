def b():
    matric_number= "BU21CSC2006"
    first_name= "sunday"
    middle_name= "abraham"
    department= "CIT"
    print(matric_number)
    print(first_name)
    print(middle_name)
    print(department)
b()









items=[1,2,3,4,5,6,7]
print(items[:-2])
print(items[-5:])
print(items[0])
print(items[3])
print(items[5])









scores= []
a=1
scores.append(a)
b=2
scores.append(b)
c= 3
scores.append(c)
d= scores[0] + scores[1] + scores[2]
e= d/3
print("element in scores are", scores)
print ("the average score is", e)






def quadratic():
    from math import sqrt
    a= int(input(" enter coefficient of a "))
    b= int(input(" enter coefficient of b "))
    c= int(input(" enter coefficient of c "))
    d= (b**2)-(4*a*c)
    e= sqrt(d)
    f= (-b) + (e)
    g= (-b) - (e)
    h= f/2*a
    i= g/2*a
    print("x is equal to ",h, "or", i)
quadratic()    

    
    
    
    
    
    
    
    
  